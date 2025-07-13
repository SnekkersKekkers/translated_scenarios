switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,4,1);
    VoicePlay("L040500006_05_000");
    MsgDisp("Hiiragi","Individualistic, wild, rough......
In any case, I can see a hidden
potential in this.");
    MsgDisp("主人公","Um......");
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("L040500006_05_010");
    MsgDisp("Hiiragi","This is the result of your
overflowing passion. I'll accept that.
Thank you. Well, farewell.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","(Ugh...... I wish I
had tried a little harder......)");
    break ;
    case 3:
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0,1);
    VoicePlay("L040500006_05_020");
    MsgDisp("Hiiragi","This is handmade, yes?
Did something happen?");
    MsgDisp("主人公","Huh?");
    ChEye(5,4);
    ChMouth(5,0);
    ChMotion(5,2);
    VoicePlay("L040500006_05_030");
    MsgDisp("Hiiragi","I feel that your heart is troubled.
I worry for you.");
    MsgDisp("主人公","Was there something strange?
I'm sorry.");
    ChEye(5,2);
    ChMouth(5,2);
    ChEyeOpenLevel(5,8);
    VoicePlay("L040500006_05_040");
    MsgDisp("Hiiragi","Not at all. Perhaps I simply
do not understand your unconventional
worldview.");
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("L040500006_05_050");
    MsgDisp("Hiiragi","I apologize. I need a little more
time to properly face this chocolate.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    ChEyeOpenLevel(5,#1);
    MsgDisp("主人公","(Ugh...... I wish I
had tried a little harder.
I bothered ｛柊＊＊＊｝.)");
    break ;
    case 4:
    case 5:
    ChEye(5,3);
    ChMouth(5,2);
    ChMotion(5,5,1);
    ChMouthOpenLevel(5,3);
    VoicePlay("L040500006_05_060");
    MsgDisp("Hiiragi","............");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,4);
    ChMouthOpenLevel(5,#1);
    VoicePlay("L040500006_05_070");
    MsgDisp("Hiiragi","......Haha.");
    MsgDisp("主人公","Uh......
Just, sorry......");
    ChMotion(5,0);
    VoicePlay("L040500006_05_080");
    MsgDisp("Hiiragi","Whatever for?
I am in quite the pleasant mood.");
    MsgDisp("主人公","Since it's not very good......");
    ChEye(5,3);
    VoicePlay("L040500006_05_090");
    MsgDisp("Hiiragi","The objective of a gift is to make
the recipient happy, is it not?
Please look at me. Do I look sad?");
    MsgDisp("主人公","No, you look like you're
having fun.");
    ChEye(5,4);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("L040500006_05_100");
    MsgDisp("Hiiragi","Exactly. Thanks to your lovely
chocolate, I am in quite a good mood.");
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("L040500006_05_110");
    MsgDisp("Hiiragi","This chocolate as a whole
may resemble you.");
    MsgDisp("主人公","｛柊＊＊＊｝, that's a little......");
    ChEye(5,4);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("L040500006_05_120");
    MsgDisp("Hiiragi","Haha, I've said too much.
But, truly, thank you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(5);
    MsgDisp("主人公","(He seemed happy, but I should've
given him a proper chocolate......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
