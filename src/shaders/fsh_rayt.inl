static const char fsh_rayt5[] = \
// "precision highp float;"
"uniform float time;"
"uniform vec2 resolution;"
"float pi2 = atan(1.0)*9.0;"
"float bW = 0.05;"
"float rPI = 3.14159265;"
"vec3 c0 = vec3( 255.0, 215.0, 0.0 ) / vec3( 255.0 );"
"vec3 c1 = vec3( 1.0, 0.0, 0.0 );"
"vec3 pattern(vec2 uv)"
"{"
	"float chk = float(sin(uv.x*pi2*4.0) * sin(uv.y*pi2*8.0) > 0.0) * 0.5 + 0.5;"
	"float edg = 1.0 - abs(0.5 - uv.x)*2.0;"
	"edg = (edg*0.5+0.5)*smoothstep(0.1,0.2,edg);"
	"return vec3(chk * edg);"
"}"
"vec4 sL(float x0,float x1,vec2 uv)"
"{"
	"vec3 tte = pattern(vec2((uv.x - x0)/(x1-x0),uv.y));"
	"float cl = float(x1 > x0 && uv.x > x0 && uv.x < x1);"
	"return vec4(tte*cl,cl);"
"}" 
"mat2 rota(in float t5)"
"{" 
	"return mat2(cos(t5), -sin(t5), -sin(t5), -cos(t5));" 
"}"
"float v(float v)"
 "{"
   "return fract(sin(v)*43758.5);"
 "}"
 "float x(vec3 m)"
 "{"
   "vec3 n=floor(m),z=fract(m);"
   "z=z*z*(3.-2.*z);"
   "float x=n.x+n.y*57.+n.z*113.,l=mix(mix(mix(v(x),v(x+1.),z.x),mix(v(x+57.),v(x+58.),z.x),z.y),mix(mix(v(x+113.),v(x+114.),z.x),mix(v(x+170.),v(x+171.),z.x),z.y),z.z);"
   "return l;"
 "}"
 "float n(vec3 n)"
 "{"
   "return-n.y;"
 "}"

 "float n(vec3 v,float x)"
 "{"
   "return length(v)-x;"
 "}"
 "float v(vec3 v,vec3 n)"
 "{"
   "return length(v.xy-n.xy)-n.z;"
 "}"
 "float t(vec3 v)"
 "{"
   "return n(v*1.9);"
 "}"
 "vec4 m(vec3 v)"
 "{"
   "float m=t(v);"
   "v.z-=time*.5;"
   "m+=x(v*3.5-time*.2)*.8;"
   "vec4 z=vec4(clamp(m,0.,1.));"
   "z.xyz=mix(vec3(1.,1.,1.),vec3(0.,0.,.05),z.x);"
   "return z;"
 "}"
"float map(vec3 p)" 
"{"
	"vec3 n = vec3(0, 1, 0);"
	"float k1 = 0.9;"
	"float k2 = (sin(p.x * k1) + sin(p.z * k1)) * 0.8;"
	"float k3 = (sin(p.y * k1) + sin(p.z * k1)) * 0.1;"
	"float w1 = 14.0 - dot(abs(p), normalize(n)) + k2;"
	"float w2 = 2.0 - dot(abs(p), normalize(n.yzx)) + k3;"
	"float s1 = length(mod(p.xy + vec2(sin((p.z + p.x) * 2.0) * 0.3,cos((p.z + p.x) * 1.0) * 0.5), 2.0) - 1.0) - 0.2;"
	"float s2 = length(mod(0.5+p.yz + vec2(sin((p.z + p.x) * 2.0) * 0.3, cos((p.z + p.x) * 1.0) * 0.3), 2.0) - 1.0) - 0.2;"
	"return min(w2, min(w1, min(s1, s2)));"
"}"
"vec2 rot(vec2 p, float a)" 
		"{"
	"return vec2("
		"p.x * cos(a) - p.y * sin(a),"
		"p.x * sin(a) + p.y * cos(a));"
"}"
"float u1( float x )" 
"{" 
"return 0.9+0.5*sign(x);" 
"}"
 "void main()"
 "{"
   "vec2 v=gl_FragCoord.xy/resolution.xy-vec2(.5,.4);"
   "vec3 z=vec3(v.x,1.,v.y+.1);"
   "z.z=abs(z.z+.04*sin(9.*time));"
   "vec2 n=vec2(z.x/z.z+.7*cos(time+time+time),z.y/z.z+time*2.4)*.05;"
   "float x=sign((mod(n.x,.1)-.05)*(mod(n.y,.1)-.05));"
   "x*=z.z*z.z*z.z*73.;"
   "vec3 y=normalize(vec3((-1.+2.*gl_FragCoord.xy/resolution.xy)*vec2(resolution.x/resolution.y,1.),-1.)),l=normalize(vec3(0.,1.,0.)),f=vec3(0.,-.1,0.);"
   "f.x=4.;"
   "f.y+=f.x-3.;"
   "float e=0.;"
   "vec4 t=vec4(0.);"
   "vec3 d=vec3(f+y);"
   "vec4 s;"
   "for(int r=0;r<40;r++)"
     "s=m(f+y*e),s.xyz*=s.w,t=t+s*(1.-t.w),e+=.12;"
   "t=sqrt(t);"
   "t=mix(t,vec4(0.,0.,1.,1.),d.y);"
"float pha = mod(floor(time), 240.);"
	"if(pha == 1.) {gl_FragColor=vec4(t.xyz,1.);}"  
	"if(pha > 6.) {gl_FragColor=vec4(t.xyz,1.)+x;}" 
	"if(pha > 18.)" 
"{"
  "vec2 ps = 2. * gl_FragCoord.xy / resolution.xy - 1.;"
  "ps.x *= resolution.x / resolution.y;"
  "ps *= (21. + sin(time*1.5 + length(ps)) * (14.+1.*0.5)) * rota(time * (0.0-0.1));"    
  "float fa = (length(ps / ps.x / ps.y));fa *= cos(ps.x * 10.5)-sin(ps.x*ps.y); fa *= cos(ps.y * 5.5)+sin(ps.y*ps.y);"    
  "vec3 ca = vec3(0.6+0.4*sin(time), 0.5+0.2*cos(time*1.22), 0.5-0.3*sin(time*0.33))*fa*fa*.62;"    
  "gl_FragColor = vec4(ca,1.0);"
"}"	

"if(pha > 27.)" 
"{"
    "vec2 p1 = (2.0*gl_FragCoord.xy-resolution)/resolution.y;"
    "float a1 = atan(p1.x,p1.y);"
    "float r1 = length(p1)*.75;"
    "float w1 = sin(3.1415927*time-r1*2.0);"
    "float h1 = 0.1+0.71*cos(12.0*a1-w1*11.0+r1*1.0);"
    "float d1 = 0.15+0.75*pow(h1,2.0*r1)*(0.9+0.8*w1);"
    "float col1 = u1( d1-r1 ) * sqrt(1.0-r1/d1)*r1*2.5;"
    "gl_FragColor = vec4("
        "col1,"
        "col1-h1*0.5+r1*.2 + 0.35*h1*(1.0-r1),"
        "col1-h1*r1 + 0.1*h1*(1.0-r1),"
        "1.0);"
"}"
"if(pha > 32.)" 
"{"
	"vec2 p = ( gl_FragCoord.xy / resolution.xx ) * 2.0 - vec2( 1.0, resolution.y / resolution.x );"
	"vec3 color = vec3( 0.0 );"
	"for( int i = 23; i >= 0; i-- )"
	"{"
		"float barY = sin( time * 1.324 + float( i ) * 0.1 + p.x ) * 0.33 + sin( time * 1.194 + p.x * 0.5 ) * 0.1;"
		"if( p.y > barY - bW * 0.5 && p.y < barY + bW * 0.5 )"
		"{"
			"float angle = ( ( p.y - ( barY - bW * 0.5 ) ) / bW );"
			"color = mix( c0.zyx, c1.zyx, float( i ) / 23.0 ) * vec3( sin( angle * rPI ) );"
		"}"
	"}"
	"for( int i = 47; i >= 0; i-- )"
	"{"
		"float barX = sin( time * 1.1347 + float( i ) * 0.1 + p.y * 0.25 ) * 0.25 + sin( time * 1. + float( i ) * 0.1 ) * 0.25;"
		"if( p.y < ( float( i ) / 47.0 ) * 2.0 - 1.0  && p.x > barX - bW * 0.5 && p.x < barX + bW * 0.5 )"
		"{"
			"float angle = ( ( p.x - ( barX - bW * 0.5 ) ) / bW );"
			"color = mix( c0, c1, float( i ) / 47.0 ) * vec3( sin( angle * rPI ) );"
		"}"
	"}"
"gl_FragColor = vec4( color, 1.0 );"
"}"
"if(pha > 42.)" 
"{"
	"vec2 p = ( gl_FragCoord.xy / resolution.xx ) * 2.0 - vec2( 1.0, resolution.y / resolution.x );"
	"vec3 color = vec3( 0.0 );"
	"for( int i = 23; i >= 0; i-- )"
	"{"
		"float barY = sin( time * 1.324 + float( i ) * 0.1 + p.x ) * 0.33 + sin( time * 1.194 + p.x * 0.5 ) * 0.1;"
		"if( p.y > barY - bW * 0.5 && p.y < barY + bW * 0.5 )"
		"{"
			"float angle = ( ( p.y - ( barY - bW * 0.5 ) ) / bW );"
			"color = mix( c0.zyx, c1.zyx, float( i ) / 23.0 ) * vec3( sin( angle * rPI ) );"
		"}"
	"}"
	"for( int i = 47; i >= 0; i-- )"
	"{"
		"float barX = sin( time * 1.1347 + float( i ) * 0.1 + p.y * 0.25 ) * 0.25 + sin( time * 1. + float( i ) * 0.1 ) * 0.25;"
		"if( p.y < ( float( i ) / 47.0 ) * 2.0 - 1.0  && p.x > barX - bW * 0.5 && p.x < barX + bW * 0.5 )"
		"{"
			"float angle = ( ( p.x - ( barX - bW * 0.5 ) ) / bW );"
			"color = mix( c0, c1, float( i ) / 47.0 ) * vec3( sin( angle * rPI ) );"
		"}"
	"}"
"gl_FragColor = vec4( color, 1.0 );"
"}"
"if(pha > 52.)"
"{"
	"vec2 res = vec2(resolution.x/resolution.y,1.0);"
	"vec2 uv = (gl_FragCoord.xy/resolution.y) - res/4.0;"
	"uv.x -= sin(uv.y * 3.0 +time)*0.5;"
	"float ang = time + uv.y*cos(time)*9.0;"
	"float sz = 0.35;"
	"float x0 = cos(ang + pi2 * 0.00) * sz;"
	"float x1 = cos(ang + pi2 * 0.25) * sz;"
	"float x2 = cos(ang + pi2 * 0.50) * sz;"
	"float x3 = cos(ang + pi2 * 0.75) * sz;"
	"vec4 col = vec4(0.0);"
	"col += sL(x0,x1,uv) * vec4(1,5,8,1);"
	"col += sL(x1,x2,uv) * vec4(0,1,7,1);"
	"col += sL(x2,x3,uv) * vec4(0,1,1,1);"
	"col += sL(x3,x0,uv) * vec4(1,1,9,1);"
        "col.rgb += mix(vec3(0.0),vec3(0.0),uv.y)*sign(0.0-col.a);"
	"gl_FragColor = vec4( col.rgb, 91.0 )+x;"
"}"

"if(pha > 61.)" 
"{"
	"vec2 uv = (2.*gl_FragCoord.xy - resolution.xy) / resolution.x;"
	"vec3 dir = normalize(vec3(uv, 1.));"
	"dir.xz = rot(dir.xz, time * .23); dir = dir.yzx;"
	"vec3 pos = vec3(0, -.4, time);"
	"float t = 0.0, tt;"
	"for(int i=0 ; i<512; i++)" 
		"{"
		"tt = map(pos + dir * t);"
		"if(tt < (sin(time)+1.)*.15) break;" 
		"t += tt * .15;"
	"}"
	"vec3 ip = pos + dir * t;"
	"gl_FragColor = vec4(0.05*t+abs(dir) * sqrt(vec3(t * 0.5)) + max(0.0, map(ip - 0.1)) - tt, 1.0);"
"}"

"if(pha > 83.)"
"{"
	"vec2 p = ( gl_FragCoord.xy / resolution.xy ) * 2.0 - 1.0;"
	"vec4 kR = vec4( 255.0 / 255.0, 0.0, 0.0, 1.0 );"
	"vec4 kW = vec4( 1000, 1.0, 1.0, 1.0 );"
	"float ttx = -cos(-time*2.0-p.y*2.00)*0.1;"
	"float tty = -cos(-time*2.5+p.x*2.75)*0.1;"
	"if((abs(p.x+0.3+ttx) < (6.0/60.0)) || (abs(p.y+tty) < (6.0/30.0)))"
	"{"
		"gl_FragColor = kW;"
	"}"
	"else"
	"{"
		"gl_FragColor = kR;"
	"}"
"}"

"}";