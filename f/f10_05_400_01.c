BGOpen("ex080",0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("F100540001_07_000");
MsgDisp("Mikage","Well, ya don't really wanna trouble
the school cafeteria ladies by
asking for too much.");
VoicePlay("F100540001_05_000");
MsgDisp("Hiiragi","Yes, that is unfortunate...");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(5,254,4,2,4,0,#1,0,1);
ChOpen(7,254,0,0,0,#1,#1,0,2);
MsgDisp("主人公","｛柊＊＊＊｝, ｛御影＊＊｝.
Are you going to have lunch now?");
ChMotion(5,0);
ChEyeOpenLevel(5,9);
VoiceEVSPlay(5);
VoicePlay("F100540001_05_010");
MsgDisp("Hiiragi","｛主人公｝.
Yes, it looks like they did 
not have Hiyashi Chuuka.");
ChEyeOpenLevel(5,0);
MsgDisp("主人公","I see.
You were so excited for it
the other day too?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("F100540001_07_010");
MsgDisp("Mikage","Yeah.
But, it is a seasonal item.
It may appear in the future.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("F100540001_05_020");
MsgDisp("Hiiragi","Yes. Then, I shall
eat something different today.
Would you also like to join us?");
MsgDisp("主人公","Yeah, absolutely.");
ChEye(5,0);
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("F100540001_07_020");
MsgDisp("Mikage","Then, let's go.");
MsgClose();
SEPlay("EV_SE_856");
ChClose(7,0,30);
ChClose(5,0,30);
VoicePlay("F100540001_05_030");
MsgDisp("Hiiragi","Ah, Mikage-sensei.
They do have a request box?");
VoicePlay("F100540001_07_030");
MsgDisp("Mikage","Ooh, let's start with the 
straightforward approach.");
MsgDisp("主人公","(Hehe, it would be good if these two
could eat Hiyashi chuuka.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
