BGOpen("ex300",2);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMPlay("BGM_XMAS_TRHEE",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
MsgDisp("主人公","It's so pretty...");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B140100000_01_000");
MsgDisp("Kazama","Yeah, it's pretty...");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
VoicePlay("B140100000_01_010");
MsgDisp("Kazama","We were together today and yesterday.");
MsgDisp("主人公","That's right.
On both days of Christmas.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("B140100000_01_020");
MsgDisp("Kazama","Yeah, this is the first time something
like this has happened.");
MsgDisp("主人公","...I'm happy.");
ChMotion(1,0);
Wait(12,0);
ChEye(1,4);
ChMouth(1,3);
VoicePlay("B140100000_01_030");
MsgDisp("Kazama","I see.
We've known each other a long time, but
there are still \"firsts\" for us.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("B140100000_01_040");
MsgDisp("Kazama","Let's keep having more firsts, okay?");
MsgDisp("主人公","Hehe, yeah!");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
