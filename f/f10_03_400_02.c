BGOpen("sc520",1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("F100340002_03_000");
MsgDisp("Honda?","Mii-kun.");
MsgDisp("主人公","(Huh?
This voice...)");
VoicePlay("F100340002_03_010");
MsgDisp("Honda?","Mii-kun, come out.");
MsgClose();
BGMPlay("BGM_C03_HONDA_A",0.01);
ChOpen(3,254,0,0,4,#1,#1,0,0);
MsgDisp("主人公","｛本多＊＊｝!
Are you looking for ｛七ツ森＊｝ again?
He really is like a lost cat.");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("F100340002_03_020");
MsgDisp("Honda","Yeah he's hiding somewhere.
Apparently, you're the hint this time.
Help me look for him?");
MsgDisp("主人公","I'm the hint?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("F100340002_03_030");
MsgDisp("Honda","Right right, that's what it said on the
message. That I should look with you.
Where do you think he is?");
MsgDisp("主人公","even if you ask me that...where could he
be?");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,5,1);
VoicePlay("F100340002_03_040");
MsgDisp("Honda","Ah, that's right!
I just came up with a strategy...!");
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
BGOpen("sc300",1);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("F100340002_04_000");
MsgDisp("Nanatsumori?","...I give up.");
ChPosition(3,1);
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChNanaType(0);
ChOpen(4,254,0,2,3,#1,#1,0,2);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("F100340002_03_050");
MsgDisp("Honda","Yes, I found Mii-kun.");
MsgDisp("主人公","Hehe, you really did!
As you strategized, ｛本多＊＊｝.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("F100340002_04_010");
MsgDisp("Nanatsumori","...Strategized?");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("F100340002_03_060");
MsgDisp("Honda","Mii-kun is a cat, so don't chase him.
He'll come to you if he gets lonely.");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("F100340002_04_020");
MsgDisp("Nanatsumori","I'm a person, so don't treat me like a
cat.");
MsgDisp("主人公","Hehe.
But just where were you, ｛七ツ森＊｝?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,4,1);
VoicePlay("F100340002_03_070");
MsgDisp("Honda","You were watching us, weren't you?");
ChEye(4,0);
ChMouth(4,1);
ChMotion(4,2,1);
MsgDisp("主人公","Eh∋
Really?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
VoicePlay("F100340002_03_080");
MsgDisp("Honda","Well, I got the message before I met up
with you.
If he wasn't watching, how would he know?");
ChEye(4,3);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("F100340002_04_030");
MsgDisp("Nanatsumori","What are you talking about?
Yeah, yeah, let's go home.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1,1);
ChEyeOpenLevel(3,0);
VoicePlay("F100340002_03_090");
MsgDisp("Honda","Yeah, let's go home; the three of us!");
MsgDisp("主人公","Hehe, yeah!");
BGMStop()MsgClose();
ScrFadeOut(0,0);
