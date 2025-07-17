BGOpen("tr230",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3,1);
ScrFadeIn(0);
VoicePlay("B040221202_02_000");
MsgDisp("Sassa","Apparently Habataki zoo's mascot is the
first park director.");
MsgSel("He's a director that likes the spotlight huh","He's wearing wellies and carrying a bucket, right?","I think an animal would be a better mascot?");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,3);
        VoicePlay("B040221202_02_010");
        MsgDisp("Sassa","Maybe. But it seems he built on a mountain
that had nothing on it. His vitality is
amazing.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040221202_02_020");
        MsgDisp("Sassa","That may be true, but he turned a mountain
that had nothing into a facility like
this.");
        MsgDisp("主人公","Yeah, he's definitely an amazing person.");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        VoicePlay("B040221202_02_030");
        MsgDisp("Sassa","It's amazing that he makes so many people
happy like this.
I want to be that kind of person");
        MsgDisp("主人公","I think ｛颯砂＊＊｝ is an
amazing player that both surprises and
entertains everyone?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040221202_02_040");
        MsgDisp("Sassa","I see, I'll try my best to become like
that...then maybe I can be made into some
kind of mascot character?");
        MsgDisp("主人公","Hehe, if` it's ｛颯砂＊＊｝, how
about a character like that horse plushie?");
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,3);
        VoicePlay("B040221202_02_050");
        MsgDisp("Sassa","Oh, a big horse that runs fast, a
thoroughbred... that's nice.");
        MsgDisp("主人公","Yeah, shall we buy it to take home?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040221202_02_060");
        MsgDisp("Sassa","Then, let's find a plush that looks like
you!
If I'm a horse, you're a... pony?");
        MsgDisp("主人公","(Umm... are we limited to horses?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040221202_02_070");
    MsgDisp("Sassa","Ehhh, so that's how it is.
He's surprisingly popular.");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040221202_02_080");
    MsgDisp("Sassa","Actually that goes for me too.
My popularity is still low.");
    MsgDispBGSksp(1,3);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
