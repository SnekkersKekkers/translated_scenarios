BGOpen("ne100",1);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMPlay("BGM_C07_MIKAGE_C",0.01);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0,1);
ScrFadeIn(0);
VoicePlay("B360707000_07_000");
MsgDisp("Mikage","The shopping district it so lively at this
time～");
MsgDisp("主人公","People are shopping for things like their
dinner.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,4);
ChEyeOpenLevel(7,0);
VoicePlay("B360707000_07_010");
MsgDisp("Mikage","......Like curry?");
MsgDisp("主人公","From the deli section?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ChEyeOpenLevel(7,10);
VoicePlay("B360707000_07_020");
MsgDisp("Mikage","Sorry, give me a second.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
Wait(30,0);
ChClose(7);
VoicePlay("B360707000_07_030");
MsgDisp("Mikage","One serving of curry please, miss!");
VoicePlay("B360707000_47_000");
MsgDisp("Clerk","Oh my.
I'll add a croquette for you～");
VoicePlay("B360707000_07_040");
MsgDisp("Mikage","Thank you.
I'll come back here.");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
Wait(25,0);
MsgClose();
ChOpen(7,255,0,0,0,#1,#1,0,0);
ChEye(7,1);
ChMouth(7,3);
ChMotion(7,3);
VoicePlay("B360707000_07_050");
MsgDisp("Mikage","It's croquette curry tonight.");
MsgDisp("主人公","Hehe, ｛御影＊＊｝, are
you good at shopping?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("B360707000_07_060");
MsgDisp("Mikage","Something like that.
I'm a regular customer.
Their hamburgers are also delicious.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,5);
VoicePlay("B360707000_07_070");
MsgDisp("Mikage","That being said, dinner on your own can be
lonely.");
MsgDisp("主人公","｛御影＊＊｝, do you
always have dinner alone?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("B360707000_07_080");
MsgDisp("Mikage","Yeah. That's why I always look forward to
the school cafeteria. Tell Yanosuke and
Inori to invite me too.");
MsgDisp("主人公","(｛御影＊＊｝, I'd love to have dinner with
you......)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ChCheek(7,0);
