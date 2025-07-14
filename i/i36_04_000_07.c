BGOpen("ar100",0);
ChLayout(1);
ChNanaType(1);
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","(Today, I have to deliver coffee and
snacks to ｛七ツ森＊｝'s modeling
agency.)");
    SEPlay("EV_SE_DOOR_014");
    MsgClose();
    ScrFadeOut(0,0,10);
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    SEStop("EV_SE_DOOR_014");
    MsgClose();
    BGOpen("ex100",0);
    ScrFadeIn(0);
    MsgDisp("主人公","Excuse me!
I'm delivering from Cafe Alucard.");
    MsgDisp("主人公","Hm? There's no one here, I wonder if
they're all on break......");
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(1);
    ChOpen(4,35,0,0,0,#1,#1,0,0,0,60);
    VoicePlay("I360400007_04_000");
    MsgDisp("Nanatsumori","Yo.
Delivery from Alucard?");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝! Yeah. Is everyone on
break?");
    ChMotion(4,1,1);
    VoicePlay("I360400007_04_010");
    MsgDisp("Nanatsumori","Yeah.
Everyone's kinda scattered around.");
    MsgDisp("主人公","I see. Then I'll leave the food and drinks
here. And......");
    MsgDisp("主人公","The manager is thankful for your continued
patronage and added these new sweets.
Please enjoy them if you'd like.");
    ChEye(4,3);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("I360400007_04_020");
    MsgDisp("Nanatsumori","Seriously godly......
Manager, thank you......
please tell them that.");
    MsgDisp("主人公","Hehe, got it.");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("I360400007_04_030");
    MsgDisp("Nanatsumori","Is your smile also part of the special
service we're getting?");
    MsgDisp("主人公","Hm?");
    ChMotion(4,2,1);
    VoicePlay("I360400007_04_040");
    MsgDisp("Nanatsumori","Nothing. Well, I'm gonna get fired up for
my next shoot.");
    MsgDisp("主人公","(I did it!
He seemed really happy!)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(Today, I have to deliver coffee and
snacks to ｛七ツ森＊｝'s modeling
agency.)");
    SEPlay("EV_SE_DOOR_014");
    MsgClose();
    ScrFadeOut(0,0,10);
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    SEStop("EV_SE_DOOR_014");
    MsgClose();
    BGOpen("ex100",0);
    ScrFadeIn(0);
    MsgDisp("主人公","Excuse me!
I'm delivering from Cafe Alucard.");
    MsgDisp("主人公","Hm? There's no one here, I wonder if
they're all on break......");
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(1);
    ChOpen(4,35,0,0,0,#1,#1,0,0,0,60);
    VoiceEVSPlay(4);
    VoicePlay("I360400007_04_050");
    MsgDisp("Nanatsumori","｛主人公｝. I heard you were coming
today, so I've been waiting.");
    MsgDisp("主人公","｛七ツ森＊｝! No one's here, huh? On
break?");
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,2,1);
    VoicePlay("I360400007_04_060");
    MsgDisp("Nanatsumori","Well...... there's that, too. Maybe
they're being considerate of us?");
    MsgDisp("主人公","???");
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("I360400007_04_070");
    MsgDisp("Nanatsumori","Here, put the stuff down.
I'll help.");
    MsgDisp("主人公","Ah, okay.
Thanks.");
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,0,1);
    ChMouthOpenLevel(4,0);
    VoicePlay("I360400007_04_080");
    MsgDisp("Nanatsumori","............");
    MsgDisp("主人公","............");
    ChMotion(4,1,1);
    ChMouthOpenLevel(4,#1);
    VoicePlay("I360400007_04_090");
    MsgDisp("Nanatsumori","Hey-");
    MsgDisp("主人公","Ah!");
    ChEye(4,5);
    ChMouth(4,5);
    ChMotion(4,5,1);
    VoicePlay("I360400007_04_100");
    MsgDisp("Nanatsumori","Wah∋");
    MsgDisp("主人公","The manager of Alucard also added some new
sweets to the delivery as a service.
Please enjoy it with everyone.");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("I360400007_04_110");
    MsgDisp("Nanatsumori","Ah, aah...... sure.
I'm happy, I guess?");
    MsgDisp("主人公","? I thought you'd be the most happy about
this, ｛七ツ森＊｝......");
    ChEye(4,4);
    VoicePlay("I360400007_04_120");
    MsgDisp("Nanatsumori","Huh∋
I'm happy, you know?
Super happy∈");
    ChEye(4,2);
    ChMotion(4,2,1);
    VoicePlay("I360400007_04_130");
    MsgDisp("Nanatsumori","My timing was just a little off......");
    MsgDisp("主人公","(｛七ツ森＊｝? You're happy about the
new sweets, right?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
