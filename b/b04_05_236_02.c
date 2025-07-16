MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
BGOpen("tr470",2);
BGMPlay("BGM_PLACE_AMUSE_NIGHT",0.01);
BGMVol(0.7,0);
ChEye(5,4);
ChMouth(5,3);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040523602_05_000");
MsgDisp("Hiiragi","Why is the amusement park so fun both
during the day and at night?");
MsgSel("｛柊＊＊＊｝ is like a kid","Because the amusement park is a fun place!","Today's an all nighter!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040523602_05_010");
    MsgDisp("Hiiragi","That's right.
I wasn't able to come much when I was a
kid, so now I'm having fun.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(5,3);
    ChMotion(5,3);
    VoicePlay("B040523602_05_020");
    MsgDisp("Hiiragi","Haha, understood.
So you're saying not to think about it too
logically");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(5,4);
        ChMouth(5,2);
        ChMotion(5,4);
        VoicePlay("B040523602_05_030");
        MsgDisp("Hiiragi","Hm?
There's a difference between cutting loose
and having fun.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,2);
        ChMouth(5,4);
        ChMotion(5,4);
        VoicePlay("B040523602_05_040");
        MsgDisp("Hiiragi","... Thank you.
And, I'm sorry.");
        MsgDisp("主人公","Eh?");
        ChMotion(5,2);
        VoicePlay("B040523602_05_050");
        MsgDisp("Hiiragi","You're kind, so you put up with my strange
anxieties.");
        ChEyeOpenLevel(5,0);
        VoicePlay("B040523602_05_060");
        MsgDisp("Hiiragi","But I don't want you staying out all
night.");
        MsgDisp("主人公","Ah, umm...
I'm the one who's sorry for getting
carried away.");
        BGMVol(1,0.2);
        ChEye(5,4);
        ChEyeOpenLevel(5,#1);
        ChMouthOpenLevel(5,0);
        VoicePlay("B040523602_05_070");
        MsgDisp("Hiiragi","............");
        SEPlay("EV_SE_DOOR_012",0.01,0);
        SEWait();
        BGMVol(0.7,0.5);
        ChEye(5,3);
        ChMotion(5,0);
        ChMouthOpenLevel(5,#1);
        VoicePlay("B040523602_05_080");
        MsgDisp("Hiiragi","... Heheh.
It's funny that we're both apologizing in
this situation.");
        MsgDisp("主人公","Hehe, yeah.");
        ChEye(5,4);
        ChMotion(5,4);
        VoicePlay("B040523602_05_090");
        MsgDisp("Hiiragi","Look. even that tuna over there is
smiling.");
        ChMouth(5,3);
        ChMotion(5,0);
        VoicePlay("B040523602_05_100");
        MsgDisp("Hiiragi","Well, let's hurry and head home!");
        MsgDisp("主人公","(｛柊＊＊＊｝, thank you for always
thinking of me...)");
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
