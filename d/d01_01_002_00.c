BGOpen("fp700",0);
BGMPlay("BGM_PLACE_POOL",0.01);
ScrFadeIn(0);
MsgDisp("主人公","It's so lively......");
VoicePlay("D010100200_34_000");
MsgDisp("Clerk","You have a good eye, bro.
That's a good item～");
MsgDisp("主人公","Over there......
Is that ｛風真＊＊｝?");
MsgClose();
ScrFadeOut(0,0);
StlOpen("ev_01_09");
StlEye(1,0);
StlMouth(1,0);
ScrFadeIn(0);
VoicePlay("D010100200_01_000");
MsgDisp("Kazama","I guess so.
Under normal circumstances, such a high
quality cup should be stored properly.");
VoicePlay("D010100200_34_010");
MsgDisp("Clerk","Right, right. You get it. OK, I'll give it
to on discount, only 10 RICH!");
StlEye(1,1);
VoicePlay("D010100200_01_010");
MsgDisp("Kazama","Even though it was in the box of 1 rich
items?");
VoicePlay("D010100200_34_020");
MsgDisp("Clerk","Uhm, that was a mistake.
So it's actually 10 RICH!");
StlEyeOpenLevel(1,0);
VoicePlay("D010100200_01_020");
MsgDisp("Kazama","I understand that.
So please sell it to me at a fair price.");
VoicePlay("D010100200_34_030");
MsgDisp("Clerk","Eh?
Bro, are you not going to buy it?");
StlEye(1,0);
VoicePlay("D010100200_01_030");
MsgDisp("Kazama","Maybe if it was 5 Rich.");
VoicePlay("D010100200_34_040");
MsgDisp("Clerk","ＯＫ!
Thanks for the sale～!");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
StlClose();
BGOpen("fp700",0);
ChLayout(1);
MsgClose();
ChOpen(1,255,7,4,2,0,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Hehe, you're such a smart shopper,
｛風真＊＊｝.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("D010100200_01_040");
MsgDisp("Kazama","You were watching?
That wasn't just shopping, it was a
rescue.");
MsgDisp("主人公","A rescue?");
BGMPlay("BGM_C01_RYOUTA_C",0.01);
Wait(50,0);
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("D010100200_01_050");
MsgDisp("Kazama","Exactly. I rescued it from being
carelessly laid on the ground by people
who don't understand its worth.");
MsgDisp("主人公","It is pretty nice.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("D010100200_01_060");
MsgDisp("Kazama","The value can only be decided by someone
understands it.
Earlier it was only worth 1 Rich.");
MsgDisp("主人公","I see, but now it's 5 Rich.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("D010100200_01_070");
MsgDisp("Kazama","Nope, it's worth 100 times more than 
that.");
MsgDisp("主人公","100 times∋");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("D010100200_01_080");
MsgDisp("Kazama","At Grandpa's place, we'll sell it for a
fair price.");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
VoicePlay("D010100200_01_090");
MsgDisp("Kazama","I sound just like dad, don't I?");
MsgDisp("主人公","｛風真＊＊｝'s dad has an antique store
in England, right?");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("D010100200_01_100");
MsgDisp("Kazama","Yeah, an antique business.");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("D010100200_01_110");
MsgDisp("Kazama","Antiques and people are the same.
If they aren't with people who value them
properly, it will cause them sorrow.");
MsgDisp("主人公","｛風真＊＊｝?");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("D010100200_01_120");
MsgDisp("Kazama","The same thing happens when they are
overvalued.");
MsgDisp("主人公","(｛風真＊＊｝ sounds kind of sad?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
ChPrmTblAdd(1,0);
