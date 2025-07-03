MsgClose();
ScrFadeOut(0);
ChClose(7,0,0);
ChLayout(1);
VoiceEVSPlay(3);
VoicePlay("D010300300_03_000");
MsgDisp("Honda","｛主人公｝, this way.");
SEPlay("EV_SE_FOOT_WALK_KEEP_ALONE",0.3,0.5);
Wait(80,1);
SEStop("EV_SE_FOOT_WALK_KEEP_ALONE",0.5);
Wait(30,1);
MsgDisp("主人公","......｛本多＊＊｝?
You're here for the extracurricular 
lesson! What's up?");
MsgClose();
BGMPlay("BGM_C03_HONDA_C",0.01);
StlOpen("ev_03_09");
StlEye(3,1);
StlMouth(3,1);
ScrFadeIn(0);
VoicePlay("D010300300_03_010");
MsgDisp("Honda","Look here, Sankayou.");
MsgDisp("主人公","Wow, what cute little flowers.");
StlEye(3,0);
StlMouth(3,1);
VoicePlay("D010300300_03_020");
MsgDisp("Honda","Yep.
But that's not all.");
StlEye(3,1);
StlMouth(3,1);
VoicePlay("D010300300_03_030");
MsgDisp("Honda","Can you close your eyes for a second?");
MsgDisp("主人公","S-Sure.");
MsgClose();
ScrFadeOut(3,30);
Wait(60,0);
SEPlay("EV_SE_543");
SEWait();
MsgDisp("主人公","(I wonder what he's doing......?)");
VoicePlay("D010300300_03_040");
MsgDisp("Honda","Okay, it's fine now.
You can open them.");
MsgClose();
StlNear(1,0,0);
StlEye(3,1);
StlMouth(3,1);
StlEyeOpenLevel(3,5);
ScrFadeIn(4,60);
Wait(60,0);
MsgDisp("主人公","Wow, amazing∈
Now the flowers are transparent like
glass!");
StlEye(3,0);
StlMouth(3,1);
VoicePlay("D010300300_03_050");
MsgDisp("Honda","It's awesome, right?");
StlEye(3,1);
StlMouth(3,1);
VoicePlay("D010300300_03_060");
MsgDisp("Honda","Sankayou usually bloom on hills and
mountains, in cold places where it
snows.");
MsgDisp("主人公","I see.
But why are they transparent?");
StlEye(3,1);
StlMouth(3,1);
StlEyeOpenLevel(3,5);
VoicePlay("D010300300_03_070");
MsgDisp("Honda","It has to do with the refraction and
diffusion of light.");
MsgDisp("主人公","Refraction and diffusion......");
StlEye(3,1);
StlMouth(3,0);
VoicePlay("D010300300_03_080");
MsgDisp("Honda","Uhm, you know how when I wear my dad's
T-Shirt and it gets wet and becomes
transparent?");
MsgDisp("主人公","Uhm, yeah......");
StlEye(3,0);
StlMouth(3,1);
StlEyeOpenLevel(3,5,1);
VoicePlay("D010300300_03_090");
MsgDisp("Honda","I guess it something similar to that～");
MsgDisp("主人公","(｛本多＊＊｝'s explanation is easy to
understand but to use his dad's shirt
in the analogy is kind of......)");
MsgClose();
ScrFadeOut(0);
StlClose();
BGOpen("fp310",0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChOpen(3,254,7,0,0,-1,-1,0,0);
BGMVol(0.5,2);
ScrFadeIn(0);
VoicePlay("D010300300_03_100");
MsgDisp("Honda","Well, it'll turn white again soon.
You should try spraying it next time.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("D010300300_03_110");
MsgDisp("Honda","Alright, there's still a lot for me to 
explore, so I'll see you later.");
MsgClose();
BGMStop();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(3);
MsgDisp("主人公","O-Okay.
I'll give it a try!");
MsgDisp("主人公","(｛本多＊＊｝'s shirt is probably so
baggy on him because it's actually
his father's......)");
MsgClose();
ScrFadeOut(0,0);
ChPrmTblAdd(3,0);
ChOpen(7,254,0,0,0,-1,-1,0,0,0,0);
