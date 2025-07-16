BGOpen("ne000",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Alright, Time to head home......)");
MsgClose();
BGMPlay("BGM_C02_SASSA_A",0.01);
ChOpen(2,255,3,0,4,#1,#1,0,0);
VoiceEVSPlay(2);
VoicePlay("E010210100_02_000");
MsgDisp("Sassa","｛主人公｝, what a
coincidence.");
MsgDisp("主人公","Ah, ｛颯砂＊＊｝.
Going out?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("E010210100_02_010");
MsgDisp("Sassa","Yeah, I was at the hospital.");
MsgDisp("主人公","Eh......
Are you hurt?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("E010210100_02_020");
MsgDisp("Sassa","It's not for me.
My dad was admitted so I went and gave him
a visit.");
ChEye(2,2);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("E010210100_02_030");
MsgDisp("Sassa","Ah, you don't need to worry.
He overstretched at a university sports
event, and tore a muscle.");
MsgDisp("主人公","Is that so? I hope he gets well soon. But
｛颯砂＊＊｝, is your dad......");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("E010210100_02_040");
MsgDisp("Sassa","Yeah, he's a university sports professor.");
MsgDisp("主人公","Awesome!
｛颯砂＊＊｝, did you get your
athletic abilities from your dad then?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,2);
VoicePlay("E010210100_02_050");
MsgDisp("Sassa","Not really, track and field is in my mom's
blood, rather.
She's got the high school record.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("E010210100_02_060");
MsgDisp("Sassa","My dad didn't seem to want to develop as a
competitor. He says the theory of coaching
is closer to his nature.");
MsgDisp("主人公","It seems you've inherited both their
talents, ｛颯砂＊＊｝.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("E010210100_02_070");
MsgDisp("Sassa","I sure hope so?
I look so much like my mom, it's become a
joke in my family.");
MsgDisp("主人公","Huh?");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,3);
ChEyeOpenLevel(2,0);
VoicePlay("E010210100_02_080");
MsgDisp("Sassa","I don't get why it's funny though.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("E010210100_02_090");
MsgDisp("Sassa","Ah, it's already this late!
I'm off.
Take care.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
MsgClose();
ChClose(2);
MsgDisp("主人公","(｛颯砂＊＊｝'s whole family is athletic.
He looks just like his mother......
I wanna see that!)");
MsgClose();
ScrFadeOut(0);
