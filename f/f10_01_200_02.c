BGOpen("sc520",0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("F100120002_01_000");
MsgDisp("Kazama?","I see, so that's the ultimate tip.");
MsgDisp("主人公","(Huh? That voice just now...)");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(1,254,0,0,3,#1,#1,0,1);
ChOpen(7,254,0,0,0,#1,#1,0,2);
MsgDisp("主人公","｛風真＊＊｝, ｛御影＊＊｝. Are you
doing the 'men living alone' course again
today?");
ChMouth(1,0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("F100120002_07_000");
MsgDisp("Mikage","Ah, it's the last installment.
Kazama is graduating soon.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("F100120002_07_010");
MsgDisp("Mikage","Are you a new student?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("F100120002_01_010");
MsgDisp("Kazama","Don't do it.
It's too stimulating for you.");
MsgDisp("主人公","...it's 'stimulating'?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("F100120002_07_020");
MsgDisp("Mikage","Well, not for girls.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(7);
ChMouth(1,0);
ChMotion(1,0);
ChPosition(1,0);
Wait(60,0);
MsgDisp("主人公","...What in the world did he teach you?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("F100120002_01_020");
MsgDisp("Kazama","He said it's best to sleep naked.");
MsgDisp("主人公","Huh∋
...That's the ultimate tip?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("F100120002_01_030");
MsgDisp("Kazama","He said it's a 'victory for one's flesh'.");
MsgDisp("主人公","Wha...? ...Surely, you don't
agree...｛風真＊＊｝?");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(8,0);
ChEye(1,2);
ChMouth(1,3);
VoicePlay("F100120002_01_040");
MsgDisp("Kazama","I'm a pajama guy from now on.");
MsgDisp("主人公","(Phew, it's okay for now...
I think?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
