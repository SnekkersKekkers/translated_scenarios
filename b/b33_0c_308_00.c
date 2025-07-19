BGOpen("tr500",0);
ChLayout(2);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0,1);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
MsgDisp("主人公","Looks like there's lots of baby sheep!");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B330C30800_06_000");
MsgDisp("Himuro","...Are sheep fluffy from birth?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B330C30800_05_000");
MsgDisp("Hiiragi","I'm curious.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,4);
VoiceEVSPlay(6);
VoicePlay("B330C30800_06_010");
MsgDisp("Himuro","｛主人公｝, what do you think?");
MsgDisp("主人公","Hmm...
Maybe not fluffy, but soft?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("B330C30800_07_000");
MsgDisp("Mikage","Haha, that's a rough guess.
Well, that's fine, should we go check it
out?");
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
ChClose(5,0,0);
ChClose(6,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("tr510",0);
ChLayout(2);
ScrFadeIn(0);
VoicePlay("B330C30800_06_020");
MsgDisp("Himuro","Ah, they're there!");
MsgDisp("主人公","Yeah, the babies...hm?");
VoicePlay("B330C30800_05_010");
MsgDisp("Hiiragi","Huh...it's not a sheep.");
VoicePlay("B330C30800_06_030");
MsgDisp("Himuro","It's a goat.");
MsgClose();
ChOpen(7,255,2,0,0,#1,#1,0,3,0,30);
ChOpen(5,255,0,0,4,#1,#1,0,3,0,30);
ChOpen(6,255,0,0,4,#1,#1,0,3,0,30);
VoicePlay("B330C30800_07_010");
MsgDisp("Mikage","But, isn't it cute?
It's pure white.");
MsgDisp("主人公","Hehe, yes.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
VoicePlay("B330C30800_06_040");
MsgDisp("Himuro","It's not fluffy...");
ChEye(5,4);
ChMouth(5,4);
ChMotion(7,0);
ChMotion(5,0,1);
VoicePlay("B330C30800_05_020");
MsgDisp("Hiiragi","It's soft...");
MsgDisp("主人公","Is that correct?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("B330C30800_07_020");
MsgDisp("Mikage","Yeah.
The baby sheep is just about the same.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("B330C30800_07_030");
MsgDisp("Mikage","Alright, let's take a closer look.
I wonder if they'll let us hold it?");
SEPlay("EV_SE_626");
ChClose(7);
ChMotion(5,4);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B330C30800_06_050");
MsgDisp("Himuro","Kojiro-sensei, shouldn't you have come in
your normal overalls today?");
MsgDisp("主人公","(Hehe!
Maybe it's just as ｛氷室＊＊｝ says?)");
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
ChClose(6,0,0);
ChLayout(2);
ChOpen(7,253,7,0,0,#1,#1,0,3,0,0);
ChOpen(5,253,7,0,0,#1,#1,0,3,0,0);
ChOpen(6,253,7,0,0,#1,#1,0,3,0,0);
