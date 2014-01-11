<?xml version="1.0" encoding="UTF-8"?>
<shader language="GLSL">

<fragment scale="1.0" filter="nearest"><![CDATA[
uniform sampler2D rubyTexture;

const float GAMMA = 0.85;

void main(void) {   
    vec4 rgb = texture2D(rubyTexture, gl_TexCoord[0].xy);
    rgb.rgb = pow(rgb.rgb, 1.0 / GAMMA);
    gl_FragColor = rgb;
}

]]></fragment>

</shader>

