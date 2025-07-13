BGOpen("ho000",2);
ChLayout(1);
MsgClose();
ChOpen(6,255,2,1,1,0,#1,0,0);
ScrFadeIn(0);
VoicePlay("B150600400_06_000");
MsgDisp("Himuro","Aah, enough!");
MsgDisp("主人公","∋
｛氷室＊＊｝......?");
ChEye(6,1);
ChMouth(6,1);
ChMotion(6,1);
VoicePlay("B150600400_06_010");
MsgDisp("Himuro","I told you as much didn't I?
Learn some self restraint and be 
careful with your actions!
You haven't done a single thing!");
MsgDisp("主人公","I meant to be more 
aware of it but...");
ChEye(6,1);
ChMouth(6,1);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
ChCheek(6,0);
VoicePlay("B150600400_06_020");
MsgDisp("Himuro","...How?");
ChEye(6,1);
ChMouth(6,1);
ChMotion(6,0);
VoicePlay("B150600400_06_030");
MsgDisp("Himuro","If you're telling me that just now 
was  after studying, self-restraint 
and watching yourself, then what 
would going all out be like? ");
MsgDisp("主人公","All-out...");
ChEye(6,1);
ChMouth(6,1);
ChMotion(6,1);
VoicePlay("B150600400_06_040");
MsgDisp("Himuro","You don't have to think about it.
I can't keep up with this, 
so I'm going home.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(6);
ChEyeOpenLevel(6,#1);
Wait(60,0);
MsgDisp("主人公","Eh∋　Wait!");
SEWait();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
MsgClose();
Wait(30,0);
ChOpen(6,255,2,1,1,0,#1,0,0);
VoicePlay("B150600400_06_050");
MsgDisp("Himuro","What.");
MsgDisp("主人公","I just... wanted to apologize.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B150600400_06_060");
MsgDisp("Himuro","...Haa.
That's why I told you many times
before. That doesn't mean I
want an apology from you.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B150600400_06_070");
MsgDisp("Himuro","I don't hate you touching me
itself. Rather... I'm happy.");
MsgDisp("主人公","Yeah...");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B150600400_06_080");
MsgDisp("Himuro","It's just that I want you to
be more aware. Your actions 
stimulate me more than you think.");
ChEye(6,1);
ChMouth(6,1);
ChMotion(6,4);
ChEyeOpenLevel(6,0);
ChCheek(6,10);
VoicePlay("B150600400_06_090");
MsgDisp("Himuro","...Don't make me say 
stuff like this.");
MsgDisp("主人公","I'm sorry.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B150600400_06_100");
MsgDisp("Himuro","I'm sorry for raising my 
voice too. But, that was why.");
MsgDisp("主人公","Yeah.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ChCheek(6,0);
VoicePlay("B150600400_06_110");
MsgDisp("Himuro","...Then, I'm heading home.
Goodnight.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(6);
SEWait();
MsgDisp("主人公","(I guess I need to reflect a bit...)");
MsgClose();
ScrFadeOut(0,0);
