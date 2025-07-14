BGOpen("fp100",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Yay!
Let's head back home!)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
SEWait();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(2,255,3,0,4,#1,#1,0,1);
ChOpen(7,255,0,0,0,#1,#1,0,2);
VoicePlay("E010230200_07_000");
MsgDisp("Mikage","Ohh, it's you this time.
Today's the day I run into all the funny
ones.");
MsgDisp("主人公","Ah, ｛御影＊＊｝, hello.
Hum, what do you mean by \"funny
ones\"......?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("E010230200_02_000");
MsgDisp("Sassa","Mikage-sensei, I'm super serious.
......You're funny, though.");
MsgDisp("主人公","What??");
ChMotion(2,0);
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3);
VoicePlay("E010230200_07_010");
MsgDisp("Mikage","Hahaha! In my opinion you're both serious
and funny!");
MsgDisp("主人公","???");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("E010230200_02_010");
MsgDisp("Sassa","Oh, that's right, I got food advice from
Mikage-sensei.");
MsgDisp("主人公","I see.
｛御影＊＊｝, you're a vegetable
expert!");
ChMouth(2,5);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("E010230200_07_020");
MsgDisp("Mikage","I'm the track and field adviser too,
though, right?");
MsgDisp("主人公","Really?");
ChEye(2,5);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("E010230200_02_020");
MsgDisp("Sassa","Oh, that's true, now that you say it......");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("E010230200_07_030");
MsgDisp("Mikage","You both completely forgot, right?");
ChEye(2,2);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("E010230200_02_030");
MsgDisp("Sassa","S-Sorry......");
ChMotion(2,0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("E010230200_07_040");
MsgDisp("Mikage","That's fine.
But Sassa, like I said earlier, you're
already training perfectly, aren't you?");
ChEye(2,0);
ChMouth(2,0);
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("E010230200_07_050");
MsgDisp("Mikage","At least eat what you want to eat.
That's the most important.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("E010230200_02_040");
MsgDisp("Sassa","Y-Yes!");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("E010230200_07_060");
MsgDisp("Mikage","If I had to give you one piece of
advice...... \"It's not what you eat, but
who you eat it with.\". That's my advice.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
VoiceEVSPlay(7);
VoicePlay("E010230200_07_070");
MsgDisp("Mikage","｛主人公｝, don't you think so too?");
ChMotion(2,0);
MsgDisp("主人公","Eh, me?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("E010230200_07_080");
MsgDisp("Mikage","Eat what you like with who you like.
That's the best feeling.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ChEyeOpenLevel(7,8);
VoicePlay("E010230200_07_090");
MsgDisp("Mikage","See ya!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(7);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,2);
VoicePlay("E010230200_02_050");
MsgDisp("Sassa","Ah, uh, see you......!");
MsgDisp("主人公","Ah, goodbye, ｛御影＊＊｝.");
ChPosition(2,0);
Wait(60,0);
ChEye(2,2);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("E010230200_02_060");
MsgDisp("Sassa","......You hungry?");
MsgDisp("主人公","(Eh...... Right away?)");
BGMStop();
MsgClose();
ScrFadeOut(0);
