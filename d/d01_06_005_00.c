BGOpen("sc210",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I'm done with entrance exams and it's
finally time to graduate...)");
MsgDisp("主人公","(Soon it'll be time to say goodbye to this
building. Come to think of it, two years
ago here I met Himuro——)");
MsgClose();
ChOpen(6,254,7,2,0,0,#1,0,0);
MsgDisp("主人公","Eh...
｛氷室＊＊｝?");
SEPlay("EV_SE_544",0,0.5);
ChEye(6,3);
ChMouth(6,0);
ChMotion(6,5);
VoicePlay("D010600500_06_000");
MsgDisp("Himuro","...Eh?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("D010600500_06_010");
MsgDisp("Himuro","What are you doing here...?");
MsgDisp("主人公","Well, the graduation ceremony will be here
soon.
So I guess I'm getting emotional?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ChEyeOpenLevel(6,8);
VoicePlay("D010600500_06_020");
MsgDisp("Himuro","What's with that...");
MsgDisp("主人公","Come to think of it, wasn't this the place
you and I met?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
VoicePlay("D010600500_06_030");
MsgDisp("Himuro","...Oh!");
MsgDisp("主人公","Remember?");
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("D010600500_06_040");
MsgDisp("Himuro","...I remember.");
MsgDisp("主人公","｛氷室＊＊｝...?");
MsgClose();
ScrFadeOut(0);
ChClose(6,0,0);
SEPlay("EV_SE_623");
Wait(10,0);
ChLayout(1);
StlOpen("ev_06_11");
StlEye(6,0);
StlMouth(6,0);
BGMPlay("BGM_C06_INORI_B",0.01);
ScrFadeIn(0);
SEPlay("EV_SE_049");
ScrQuake(1);
SEWait();
VoicePlay("D010600500_06_050");
MsgDisp("Himuro","I remember everything...!
Even now, nothing has changed.");
MsgDisp("主人公","∋");
StlEye(6,0);
StlMouth(6,0);
VoicePlay("D010600500_06_060");
MsgDisp("Himuro","It's been like this ever since we first
met.
You always enter without permission.");
StlEye(6,0);
StlMouth(6,0);
StlEyeOpenLevel(6,5);
VoicePlay("D010600500_06_070");
MsgDisp("Himuro","I was always fine with being alone, but
before I knew it, you were by my side and
then that became my new normal...");
StlEye(6,0,0);
StlMouth(6,0);
StlEyeOpenLevel(6,0,1);
VoicePlay("D010600500_06_080");
MsgDisp("Himuro","Before I knew it, being alone started to
become uncomfortable.
...And yet——");
StlEye(6,2);
StlMouth(6,1);
VoicePlay("D010600500_06_090");
MsgDisp("Himuro","Now you'll be gone soon.");
MsgDisp("主人公","｛氷室＊＊｝...");
StlEye(6,2);
StlMouth(6,1);
StlEyeOpenLevel(6,5);
VoicePlay("D010600500_06_100");
MsgDisp("Himuro","I haven't changed at all...
Taking it out on you again like this, I
haven't matured at all.");
MsgDisp("主人公","That's not true.
｛氷室＊＊｝ shows more of his true self
than when we first met.");
StlEye(6,1);
StlMouth(6,1);
VoicePlay("D010600500_06_110");
MsgDisp("Himuro","Eh...");
MsgDisp("主人公","I never expected I would get to see you
cry like this, ｛氷室＊＊｝.");
StlEye(6,1);
StlMouth(6,0);
StlEyeOpenLevel(6,5);
VoicePlay("D010600500_06_120");
MsgDisp("Himuro","...");
StlEye(6,0);
StlMouth(6,1);
VoicePlay("D010600500_06_130");
MsgDisp("Himuro","You're really inconsiderate.");
MsgDisp("主人公","Ack...
Sorry.");
StlEye(6,1,0);
StlMouth(6,1);
StlEyeOpenLevel(6,0,1);
VoicePlay("D010600500_06_140");
MsgDisp("Himuro","But...
I guess that's just about the right
amount...");
BGMVol(0.5,2);
MsgClose();
ScrFadeOut(0);
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ScrFadeIn(0);
MsgDisp("主人公","Eh, what now——");
MsgClose();
ChOpen(6,254,2,2,0,0,#1,0,0);
VoicePlay("D010600500_06_150");
MsgDisp("Himuro","Never mind.
There's nothing left to say about it.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("D010600500_06_160");
MsgDisp("Himuro","Thanks to you, I'm getting emotional too.");
MsgDisp("主人公","Uhm, you're welcome?");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,5);
VoicePlay("D010600500_06_170");
MsgDisp("Himuro","Heh...
What's with you.");
MsgDisp("主人公","(Looks like ｛氷室＊＊｝ is back to his
usual self?
What a relief...)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChClose(6,0,0);
ChPrmTblAdd(6,0);
