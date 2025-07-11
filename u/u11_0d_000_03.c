BGOpen("bh900",1);
BGMPlay("BGM_HANYOU_A",0.01);
ChLayout(1);
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,0);
ScrFadeIn(0);
MsgDisp("主人公","Sorry to disturb.
Ah, this room is as stylish as ever!");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("U110D00003_21_000");
MsgDisp("Michiru","Hehe.
I'll make some tea. 
We also have Anastasia's new cake.");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("U110D00003_22_000");
MsgDisp("Hikaru","Sis, Hikaru will help too.
Just relax Mari♪");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("bh900",2);
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,0);
ScrFadeIn(0);
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("U110D00003_22_010");
MsgDisp("Hikaru","Well then it's about time, isn't it?
The annual sleepover girl talk▼");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("U110D00003_21_010");
MsgDisp("Michiru","After we get dressed, let's meet up
in Mari's room, shall we?");
MsgClose();
BGMStop();
ScrFadeOut(0);
MsgClose();
ChClose(21,0,0);
ChClose(22,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
StlOpen("ev_0d_01");
StlEye(21,0);
StlMouth(21,0);
StlEye(22,0);
StlMouth(22,0);
StlCheek(22,0);
BGMPlay("BGM_C23_HIKARU_MICHIRU",0.01,0.9);
ScrFadeIn(0);
MsgDisp("主人公","This room has a nice scent.");
StlEyeOpenLevel(21,5);
VoicePlay("U110D00003_21_020");
MsgDisp("Michiru","Yeah.
I put on some rosemary incense. 
It creates a nice ambiance.");
StlEye(22,2);
VoicePlay("U110D00003_22_020");
MsgDisp("Hikaru","This is so so nice!
Let's chat until we fall asleep♪");
StlEye(21,0);
StlEye(22,0);
MsgClose();
ChPrmTblAdd(21,1);
ChPrmTblAdd(22,1);
