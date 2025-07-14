BGOpen("sc230",0);
ChLayout(1);
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(21,254,0,0,2,#1,#1,0,0,0,0);
ScrFadeIn(0);
ChMouth(21,2);
MsgDisp("主人公","Ah, ｛みちる＊｝.");
ChEye(21,4);
ChMouth(21,4);
ChMotion(21,0);
VoicePlay("F102130001_21_000");
MsgDisp("Michiru","Mari...");
MsgDisp("主人公","What's up?");
ChEye(21,2);
ChMouth(21,4);
ChMotion(21,4);
VoicePlay("F102130001_21_010");
MsgDisp("Michiru","I've been feeling like I'm about to sneeze
for a while now. Hmm...");
MsgDisp("主人公","Ah, I know that feeling.
When you still can't quite get it out,
right?");
ChEye(21,2);
ChMouth(21,4);
ChMotion(21,2);
ChEyeOpenLevel(21,0);
VoicePlay("F102130001_21_020");
MsgDisp("Michiru","Right...
Hmm...haaa...");
ChEye(21,5);
ChMouth(21,4);
ChMotion(21,0);
VoicePlay("F102130001_22_000");
MsgDisp("Hikaru?","Achoo∈");
MsgDisp("主人公","Eh?");
MsgClose();
ChClose(21,0,30);
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChOpen(21,254,7,0,4,#1,#1,0,1,0,30);
ChOpen(22,254,0,0,0,#1,#1,0,2,0,30);
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("F102130001_22_010");
MsgDisp("Hikaru","Phuaah～,I feel refreshed♪
Ah, Mari!");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
MsgDisp("主人公","Did you sneeze just now, ｛ひかる＊｝?");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("F102130001_22_020");
MsgDisp("Hikaru","Right. It was taking a while to come out～
Finally.");
ChEye(21,4);
ChMouth(21,0);
ChMotion(21,3);
VoicePlay("F102130001_21_030");
MsgDisp("Michiru","Hehe. Hikaru did it in my place, so I feel
refreshed too.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,4,1);
ChEyeOpenLevel(22,0);
VoicePlay("F102130001_22_030");
MsgDisp("Hikaru","Aha▼");
MsgDisp("主人公","(Is this twin synchronicity?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
