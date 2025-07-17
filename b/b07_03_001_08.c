MsgDisp("主人公","......");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("B070300001_03_580");
MsgDisp("Honda","Hmm?
Is there something on my face?");
MsgDisp("主人公","Oh, sorry.
I was just staring.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("B070300001_03_590");
MsgDisp("Honda","Oh, if that's the case, feel free to look
as much as you want.");
MsgDisp("主人公","Heh, okay.");
ChMotion(3,0);
VoicePlay("B070300001_03_600");
MsgDisp("Honda","Is there something on your mind?");
MsgDisp("主人公","I was just thinking your hair is really
smooth ｛本多＊＊｝.
It looks lovely.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,4);
VoicePlay("B070300001_03_610");
MsgDisp("Honda","Really? My dad's hair has been thinning,
so I've been researching and trying a
bunch of things to help.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("B070300001_03_620");
MsgDisp("Honda","I've used a boar bristle brush that's
supposed to be good for hair, and tried
all sorts of shampoos from different
brands.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,5);
VoicePlay("B070300001_03_630");
MsgDisp("Honda","Oh yeah!");
ChSet(3,3);
VoicePlay("B070300001_03_640");
MsgDisp("Honda","I even tried applying oil before drying my
hair because I heard it adds shine and
keeps it from getting damaged. I've used
everything from camellia oil to olive oil!");
MsgDisp("主人公","Wow, that's impressive!");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,4);
ChEyeOpenLevel(3,0);
VoicePlay("B070300001_03_650");
MsgDisp("Honda","Wanna feel it?
I'll make an exception just for you!");
MsgDisp("主人公","(I'd love to, but is it okay?
I'm feeling a bit nervous...)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(3,#1);
ChMouthOpenLevel(3,#1);
ChCheek(3,0);
