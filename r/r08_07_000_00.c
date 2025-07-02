BGMStop(1.7);
Wait(100,0);
BGOpen("sc770",2);
ScrFadeIn(0);
MsgDisp("主人公","(And just like that, the last Christmas
of my high school life is over...)");
ChLayout(1);
BGMStop(1.7);
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
Wait(40,0);
MsgDisp("主人公","(Brr, like I expected, it's cold...)");
SEPlay("EV_SE_733");
SEWait();
MsgDisp("主人公","……？");
VoicePlay("R080700000_07_000");
MsgDisp("Mikage","Oh, there you are!
You seem cold, put this on.");
SEStop("EV_SE_733");
SEPlay("EV_SE_623");
SEWait();
MsgClose();
ChLayout(1);
ChClose(7,0,0);
BGMPlay("BGM_XMAS_TRHEE",0.01);
StlOpen("ev_07_15");
StlEye(7,1);
StlMouth(7,1);
ScrFadeIn(0);
MsgDisp("主人公","｛御影＊＊｝ ∋
Ah, thank you very much...
Were you chasing me for this?");
StlEye(7,1,0);
StlMouth(7,1);
StlEyeOpenLevel(7,5,1);
VoicePlay("R080700000_07_010");
MsgDisp("Mikage","I guess. It's more that I
couldn't talk as much as I wanted.");
VoicePlay("R080700000_07_020");
MsgDisp("Mikage","I didn't feel like keeping you all
to myself at the party anyways.");
MsgDisp("主人公","Huh?");
StlEye(7,0);
StlMouth(7,0);
VoicePlay("R080700000_07_030");
MsgDisp("Mikage","Phew... our last Christmas party
together is over.");
MsgDisp("主人公","Yeah... I'll miss them.");
StlEye(7,0);
StlMouth(7,0);
StlEyeOpenLevel(7,0);
VoicePlay("R080700000_07_040");
MsgDisp("Mikage","Since I'm a teacher at Habataki
High, I've always been attending the 
Christmas parties.");
MsgDisp("主人公","I see... so you'll be here next
year, ｛御影＊＊｝.");
StlEye(7,1);
StlMouth(7,1);
VoicePlay("R080700000_07_050");
MsgDisp("Mikage","I guess so. But this will
be my last year with you.");
StlEye(7,1);
StlMouth(7,1);
StlEyeOpenLevel(7,0);
VoicePlay("R080700000_07_060");
MsgDisp("Mikage","Not only parties, you helped me
do a lot of things I wasn't able
to do in high school.");
MsgDisp("主人公","Well, it was just things
I wanted to do.");
StlEye(7,1);
StlMouth(7,1);
VoicePlay("R080700000_07_070");
MsgDisp("Mikage","Come on.
Don't make me cry again,
Serious-chan.");
StlEye(7,0,0);
StlMouth(7,1);
StlEyeOpenLevel(7,5,1);
VoicePlay("R080700000_07_080");
MsgDisp("Mikage","But now that you're with me,
I guess I don't need this anymore...?");
MsgDisp("主人公","Huh...?");
BGMVol(0.5,2);
MsgClose();
ScrFadeOut(0);
StlClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
Wait(30,0);
SEPlay("EV_SE_873");
SEWait();
BGOpen("ho000",2);
ChOpen(7,34,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("R080700000_07_090");
MsgDisp("Mikage","Oh... look at that.
The party's over.");
MsgDisp("主人公","Yes...｛御影＊＊｝, these
three years we spent at Christmas
parties have been so fun.");
MsgClose();
SEPlay("EV_SE_FOOT_039");
ChClose(7,0,30);
ChLayout(0);
ChOpen(7,34,0,0,0,-1,-1,0,0,0,30);
SEWait();
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ChEyeOpenLevel(7,8);
VoicePlay("R080700000_07_100");
MsgDisp("Mikage","Yeah, I had a good time too.");
MsgClose();
ScrFadeOut(3,30);
SEPlay("EV_SE_682",0.1,0.5);
MsgDisp("","(Pat pat)");
ChMouth(7,3);
ChMotion(7,2);
VoicePlay("R080700000_07_110");
MsgDisp("Mikage","My precious Serious-chan,
thank you.");
MsgDisp("主人公","M-My head...");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,0);
ChEyeOpenLevel(7,0);
ScrFadeIn(4,30);
VoicePlay("R080700000_07_120");
MsgDisp("Mikage","Phew... if I stay
with you any longer, I feel like
I'll be in Nirvana.");
MsgDisp("主人公","？");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop(5);
ChClose(7);
VoicePlay("R080700000_07_130");
MsgDisp("Mikage","Okay then, good night.");
MsgDisp("主人公","Ah, yes...!
Thank you very much for bringing me home.");
MsgDisp("主人公","(Nirvana......?
Oh wait, I still have your jacket!I hope
you don't catch a cold, ｛御影＊＊｝...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChPrmTblAdd(7,0);
