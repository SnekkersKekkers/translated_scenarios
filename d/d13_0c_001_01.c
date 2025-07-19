MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc771",2);
ChLayout(1);
MsgClose();
ChOpen(5,34,0,4,4,#1,#1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(5);
VoicePlay("D130C00101_05_000");
MsgDisp("Hiiragi","｛主人公｝, I finally found you.");
MsgDisp("主人公","｛柊＊＊＊｝, what's up?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("D130C00101_05_010");
MsgDisp("Hiiragi","It's our last Christmas party, so I wanted
to spend some time with everyone.");
MsgDisp("主人公","Everyone?");
ChClose(5,0,30);
ChLayout(2);
MsgClose();
ChOpen(5,34,0,0,4,#1,#1,0,0);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
ChOpen(6,34,0,0,4,#1,#1,0,1,0,30);
ChOpen(7,34,0,0,0,#1,#1,0,2,0,30);
VoicePlay("D130C00101_06_000");
MsgDisp("Himuro","When he says \"everyone\" I think he means
us.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("D130C00101_07_000");
MsgDisp("Mikage","That's a little cold.");
MsgDisp("主人公","Ah, ｛氷室＊＊｝, ｛御影＊＊｝!");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0,1);
VoicePlay("D130C00101_05_020");
MsgDisp("Hiiragi","For you and I, this will be our final
Christmas Party.");
MsgDisp("主人公","That's true.
Next year is already graduation...");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
ChEyeOpenLevel(6,8);
VoicePlay("D130C00101_06_010");
MsgDisp("Himuro","You need to think of the people you'll be
leaving behind.");
ChEye(5,0);
ChMouth(5,2);
MsgDisp("主人公","Eh?");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("D130C00101_07_010");
MsgDisp("Mikage","That's right.
Being left behind is painful.");
ChEye(5,0);
ChMouth(5,2);
ChMotion(5,4);
VoicePlay("D130C00101_05_030");
MsgDisp("Hiiragi","Mikage-sensei?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
VoicePlay("D130C00101_07_020");
MsgDisp("Mikage","Maybe I should abuse my authority and make
you two repeat a year?");
ChEye(5,2);
ChMouth(5,2);
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,3);
VoicePlay("D130C00101_06_020");
MsgDisp("Himuro","That could work.");
MsgDisp("主人公","Eh!");
ChEye(5,2);
ChMouth(5,2);
ChMotion(5,5);
VoicePlay("D130C00101_05_040");
MsgDisp("Hiiragi","T-That's troubling.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
VoicePlay("D130C00101_07_030");
MsgDisp("Mikage","Hahaha, it's a joke.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
VoicePlay("D130C00101_06_030");
MsgDisp("Himuro","For me, it's not...");
ChEye(5,4);
ChMouth(5,2);
ChMotion(5,0);
MsgDisp("主人公","｛氷室＊＊｝...");
ChMouth(5,4);
VoicePlay("D130C00101_05_050");
MsgDisp("Hiiragi","Inori-kun...");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("D130C00101_07_040");
MsgDisp("Mikage","Come on.
Why don't the three of you leave the
brooding for March?");
ChEyeOpenLevel(5,0);
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,1);
VoicePlay("D130C00101_06_040");
MsgDisp("Himuro","That's true.
We don't know yet whether you two will
graduate or repeat the year.");
ChEye(5,2);
ChMouth(5,2);
MsgDisp("主人公","Ehh∋");
ChEye(5,2);
ChMouth(5,2);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("D130C00101_05_060");
MsgDisp("Hiiragi","...My grades might make that a reality.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("D130C00101_07_050");
MsgDisp("Mikage","I'm telling you, it'll be fine, Yanosuke.");
ChMouth(5,4);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,5);
VoicePlay("D130C00101_07_060");
MsgDisp("Mikage","Alright, next year we'll change the venue
and have a Christmas-themed barbecue,
okay?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("D130C00101_05_070");
MsgDisp("Hiiragi","That sounds good.");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,4);
VoicePlay("D130C00101_06_050");
MsgDisp("Himuro","It's a promise.");
MsgDisp("主人公","Hehe, yes!");
MsgDisp("主人公","(Everyone seems to be having fun at the
Christmas Party...
I wonder what will happen next year...?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
ChClose(6,0,0);
ChClose(7,0,0);
