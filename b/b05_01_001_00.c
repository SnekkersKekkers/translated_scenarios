BGMPlay("BGM_PLACE_POOL",0.01);
MsgClose();
ChClose(1,0,0);
BGOpen("fp510",0);
SEPlay("EV_SE_507",0.2,0.6);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ScrFadeIn(0);
SEStop("EV_SE_507",5);
BGMStop(2);
MsgDisp("主人公","(｛風真＊＊｝ told me to wait here but...
where did he go?)");
SEPlay("EV_SE_508");
SEWait();
VoiceEVSPlay(1);
VoicePlay("B050100100_01_000");
MsgDisp("Kazama","｛主人公｝, here, this is yours.");
MsgClose();
ScrFadeOut(0,0);
StlOpen("ev_01_03");
StlEye(1,1);
StlMouth(1,1);
BGMPlay("BGM_HANYOU_C",0.01);
ScrFadeIn(0);
MsgDisp("主人公","Ah, you're finally back.");
VoicePlay("B050100100_01_010");
MsgDisp("Kazama","There were nothing but kiddy ones.");
MsgDisp("主人公","Thank you...hey, ｛風真＊＊｝ also uses
floats?");
StlEye(1,0);
StlMouth(1,0);
VoicePlay("B050100100_01_020");
MsgDisp("Kazama","Yeah.
I do?
It's normal.");
MsgDisp("主人公","(Normal...
Umm, I wonder about that...)");
StlEye(1,1);
StlMouth(1,1);
VoicePlay("B050100100_01_030");
MsgDisp("Kazama","What's with that face.
Here, this pink one is yours.");
MsgDisp("主人公","Ah, yeah.");
BGMStop(2);
MsgClose();
ScrFadeOut(0,0);
StlClose();
Wait(30,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
BGOpen("fp510",0);
MsgClose();
ChOpen(1,31,7,2,2,0,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","This is fun huh.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B050100100_01_040");
MsgDisp("Kazama","Well, yeah. Schools in England don't
really have stuff like swimming, so I
can't really swim that well.");
MsgDisp("主人公","I see.
I think it's okay to just enjoy it how you
want then, ｛風真＊＊｝.");
ChEyeOpenLevel(1,0);
Wait(8,0);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("B050100100_01_050");
MsgDisp("Kazama","Thanks.
I was thinking...");
MsgDisp("主人公","What is it?");
BGMPlay("BGM_C01_RYOUTA_A",0.01);
Wait(30,0);
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("B050100100_01_060");
MsgDisp("Kazama","If we were together in elementary school
or middle school what would it have been
like to go to the beach or the pool
together?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B050100100_01_070");
MsgDisp("Kazama","And it's like I've retuned to 10 years ago
in my mind?");
MsgDisp("主人公","Hehe.
I'm like that too sometimes.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
ChEyeOpenLevel(1,0);
VoicePlay("B050100100_01_080");
MsgDisp("Kazama","That's why I got the float today too.
But you have to forget it.
Got it?");
MsgDisp("主人公","Hehe, got it.
Thank you for picking a cute float out for
me, ｛風真＊＊｝.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B050100100_01_090");
MsgDisp("Kazama","You're welcome.");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(1,#1);
ChPrmTblAdd(1,0);
