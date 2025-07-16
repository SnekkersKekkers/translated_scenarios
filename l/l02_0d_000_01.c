BGOpen("sc510",0);
ChLayout(1);
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(21,254,0,0,0,#1,#1,0,1,0,30);
ChOpen(22,254,0,3,3,#1,#1,0,2,0,30);
ScrFadeIn(0);
ChMotion(22,3,1);
VoicePlay("L020D00001_22_000");
MsgDisp("Hikaru","Mari～!
Today's Valentine's Day♪");
MsgDisp("主人公","Yeah, I came prepared.");
ChEye(22,2);
ChMouth(22,0);
ChMotion(22,2,1);
VoicePlay("L020D00001_22_010");
MsgDisp("Hikaru","We wanted to make handmade chocolate with
Mari, though.");
ChEye(21,4);
ChMouth(21,0);
ChMotion(21,4);
VoicePlay("L020D00001_21_000");
MsgDisp("Michiru","Hikaru, it's fine.
Mari thought it through herself.
Right?");
MsgDisp("主人公","Hehe, thank you.");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(21,0,0);
ChClose(22,0,0);
