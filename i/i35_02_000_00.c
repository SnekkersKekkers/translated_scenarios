BGOpen("ar100",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    SEPlay("EV_SE_DOOR_014");
    Wait(30,0);
    MsgDisp("主人公","Welcome! Ah, ｛颯砂＊＊｝?");
    MsgClose();
    BGMPlay("BGM_C02_SASSA_A",0.01);
    ChOpen(2,255,3,0,4,#1,#1,0,0);
    VoicePlay("I350200000_02_000");
    MsgDisp("Sassa","Oh, you work here.");
    MsgDisp("主人公","Yeah, that's right.");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("I350200000_02_010");
    MsgDisp("Sassa","I guess I'm lucky today.
I got lured in by the smell of coffee, and
you were here.");
    MsgDisp("主人公","Hehe. The coffee at Alucard is the best,
you know?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("I350200000_02_020");
    MsgDisp("Sassa","Then, I'll have a cup.");
    MsgClose();
    ScrFadeOut(0);
    ChClose(2,0,0);
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    Wait(40);
    MsgClose();
    ScrFadeIn(0);
    MsgClose();
    ChOpen(2,255,0,0,4,#1,#1,0,0);
    VoicePlay("I350200000_02_030");
    MsgDisp("Sassa","Thanks.
It was good.");
    MsgDisp("主人公","You liked it?");
    ChEye(2,3);
    ChMouth(2,4);
    ChMotion(2,4);
    ChEyeOpenLevel(2,0);
    VoicePlay("I350200000_02_040");
    MsgDisp("Sassa","Yeah. Your uniform was amazing. I'll come
again.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(2);
    SEWait();
    SEPlay("EV_SE_DOOR_014");
    MsgDisp("主人公","(......Uniform?
Not the coffee?)");
    break ;
    case 3:
    SEPlay("EV_SE_DOOR_014");
    Wait(30,0);
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝. Welcome♪");
    MsgClose();
    BGMPlay("BGM_C02_SASSA_A",0.01);
    ChOpen(2,255,3,0,3,#1,#1,0,0);
    VoicePlay("I350200000_02_050");
    MsgDisp("Sassa","This is it, that smell and your voice.
This place really is great.");
    MsgDisp("主人公","Hehe, it seems like you
like it here?");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("I350200000_02_060");
    MsgDisp("Sassa","Yeah, I do.
I get to see a different side to you, and
the smell is great.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("I350200000_02_070");
    MsgDisp("Sassa","Hm......
Ha......");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,4);
    VoicePlay("I350200000_02_080");
    MsgDisp("Sassa","It might be kind of addictive.");
    MsgDisp("主人公","Huh?　You're exaggerating......");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("I350200000_02_090");
    MsgDisp("Sassa","Not really.
Before I know it, my feet start heading
here.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("I350200000_02_100");
    MsgDisp("Sassa","Even if I'm not here, I always end up
looking for you if I smell coffee.
You know?");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("I350200000_02_110");
    MsgDisp("Sassa","Ah, I think there was an experiment about
this involving dogs.");
    MsgDisp("主人公","Um...... There are other customers at the
entrance here. Come this way.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("I350200000_02_120");
    MsgDisp("Sassa","Sorry, sorry.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(2);
    SEWait();
    SEPlay("EV_SE_DOOR_014");
    MsgDisp("主人公","(｛颯砂＊＊｝ likes Alucard, right......?)");
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_DOOR_014");
    Wait(30,0);
    MsgDisp("主人公","Welcome.");
    MsgClose();
    BGMPlay("BGM_C02_SASSA_A",0.01);
    ChOpen(2,40,2,0,0,#1,#1,10,0);
    VoicePlay("I350200000_02_130");
    MsgDisp("Sassa","H, huh......");
    MsgDisp("主人公","What is it? ｛颯砂＊＊｝.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("I350200000_02_140");
    MsgDisp("Sassa","While I was doing work on the road, I just
naturally came in......");
    MsgDisp("主人公","Huh∋");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    ChCheek(2,0);
    VoicePlay("I350200000_02_150");
    MsgDisp("Sassa","Sorry, what am I doing.
I gotta go.");
    MsgDisp("主人公","Huh?
A little break is fine.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("I350200000_02_160");
    MsgDisp("Sassa","No, I still have a long way to go.
See you.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,2);
    VoicePlay("I350200000_02_170");
    MsgDisp("Sassa","Haaa...... What am I thinking while
training...... I'm seriously sick.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(2);
    SEWait();
    SEPlay("EV_SE_DOOR_014");
    MsgDisp("主人公","(He left......
I wonder what ｛颯砂＊＊｝ was thinking
while running?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
SEStop("EV_SE_DOOR_014",1);
BGMStop();
MsgClose();
ScrFadeOut(0,0);
