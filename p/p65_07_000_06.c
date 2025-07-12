MsgClose();
BGMPlay("BGM_FESTIVAL");
BGOpen("sc710",0);
ChOpen(7,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(7);
VoicePlay("P650700006_07_000");
MsgDisp("Mikage","｛主人公｝, 
Hooray, yeah?
Our reputation was good.");
MsgDisp("主人公","Was it really?
I'm glad.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("P650700006_07_010");
MsgDisp("Mikage","Yes, everyone looked happy.
You made them smile.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
VoicePlay("P650700006_07_020");
MsgDisp("Mikage","Furthermore, the vegetables
and herbs should be happy too.");
MsgDisp("主人公","Hehe, yes.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("P650700006_07_030");
MsgDisp("Mikage","At your last school festival, you finished
with the best results. As expected of my
prized Gardening Club member.");
MsgDisp("主人公","(Yay, a huge success! I was able to make a
nice memory of the last cultural festival
of my high school life...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
BGMStop();
