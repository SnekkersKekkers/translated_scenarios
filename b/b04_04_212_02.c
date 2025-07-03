BGOpen("tr230",0);
ChLayout(1);
ChNanaType(-1);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1);
ScrFadeIn(0);
VoicePlay("B040421202_04_000");
MsgDisp("Nanatsumori","There are bunny-ear headbands and 
gorilla caos.");
MsgSel("Seems like you can use them for cosplay!","This sort of thing is for children","It would be embarrassing to wear them...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040421202_04_010");
    MsgDisp("Nanatsumori","It's fine for the rabbit, 
but not the gorillaー.");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    DateRateSet(1);
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,0,1);
    VoicePlay("B040421202_04_020");
    MsgDisp("Nanatsumori","No, adults use it too?");
    MsgDateResultDisp();
    break ;
    case 2:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,2,1);
        ChEyeOpenLevel(4,8);
        VoicePlay("B040421202_04_030");
        MsgDisp("Nanatsumori","Ah, right.
Seems like we don't get along...");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("B040421202_04_040");
        MsgDisp("Nanatsumori","Why?
I think it would suit you.");
        ChEye(4,0);
        ChMouth(4,3);
        VoicePlay("B040421202_04_050");
        MsgDisp("Nanatsumori","Here, the rabbit ear set～!");
        MsgDisp("主人公","I definitely can't!");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040421202_04_060");
        MsgDisp("Nanatsumori","Haha!
You're so funny.");
        MsgDisp("主人公","Ugh... you're teasing me.");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("B040421202_04_070");
        MsgDisp("Nanatsumori","I mean, bunny girls are something
that guys yearn for?");
        MsgDisp("主人公","...Pervert.");
        ChEye(4,2);
        ChMouth(4,1);
        ChMotion(4,2,1);
        ChCheek(4,8);
        VoicePlay("B040421202_04_080");
        MsgDisp("Nanatsumori","Eh∋
I didn't say you had to 
be a full-body bunny.");
        MsgDisp("主人公","Your eyes are kind of
serious though,｛七ツ森＊｝.");
        ChEye(4,2);
        ChMouth(4,3);
        ChMotion(4,0,1);
        ChCheek(4,2);
        VoicePlay("B040421202_04_090");
        MsgDisp("Nanatsumori","Well...it can't be helped.
I seriously do want to see it after all.");
        MsgDisp("主人公","Ehー...");
        MsgDisp("主人公","Okay, understood.
Then, I'll wear it.");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,3,1);
        VoicePlay("B040421202_04_100");
        MsgDisp("Nanatsumori","Yay!");
        MsgDisp("主人公","In exchange——");
        MsgClose();
        SEPlay("EV_SE_544",0,0.8,0.3);
        ChClose(4,0,30);
        MsgClose();
        ChLayout(0);
        ChNanaType(-1);
        ChOpen(4,255,0,5,4,-1,-1,5,0,0,60);
        SEPlay("EV_SE_554");
        ScrQuake(1);
        MsgDisp("主人公","｛七ツ森＊｝ can wear the gorilla cap!");
        ChEye(4,4);
        ChMouth(4,1);
        VoicePlay("B040421202_04_110");
        MsgDisp("Nanatsumori","Gah, seriously∋");
        MsgDisp("主人公","Ahaha!");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    default :
    DbgAssert(0);
    break ;
    }
