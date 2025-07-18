BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Haa...maybe I didn't practice enough...)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(5,254,0,4,4,#1,#1,0,0);
VoicePlay("P540500003_05_000");
MsgDisp("Hiiragi","That was an interesting sound.
I've become a little curious about game
music.");
MsgDisp("主人公","Interesting...?
I think that's where I messed up.");
ChEye(5,3);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("P540500003_05_010");
MsgDisp("Hiiragi","Is that right?
But, it made us, the audience fel happy
listening to it.");
MsgDisp("主人公","Y-Yeah.
That's nice, but...");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("P540500003_05_020");
MsgDisp("Hiiragi","Now it's a question of what you guys want
to do.");
MsgDisp("主人公","(This is a result of playing hooky...
I just have to accept it properly.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
