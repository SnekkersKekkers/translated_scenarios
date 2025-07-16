MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("fp700",0);
BGMPlay("BGM_PLACE_POOL",0.01);
ChLayout(1);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B040312102_03_000");
MsgDisp("Honda","Each time we come here, the number of
stalls seems to be increasing");
MsgSel("I wonder how much they make?","Apparently it was presented on TV","It seems like you can only set up a stall if you win a lottery.");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,4);
        VoicePlay("B040312102_03_010");
        MsgDisp("Honda","That's what you focus on?
I think there aren't many stalls here
aiming for big sales.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,0,1);
        VoicePlay("B040312102_03_020");
        MsgDisp("Honda","Hmmー.
It seems like there's only a few stalls
aiming on making a profit.");
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,4);
        VoicePlay("B040312102_03_030");
        MsgDisp("Honda","But I think it's fine.
Deciding on a goal for your stall, and
thinking up on how to achieve it.");
        MsgDisp("主人公","｛本多＊＊｝, what sort of stall
would you set up?");
        ChEye(3,0);
        ChMouth(3,4);
        ChMotion(3,0);
        VoicePlay("B040312102_03_040");
        MsgDisp("Honda","It seems easy to sell the things you
already have at home...");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,1);
        VoicePlay("B040312102_03_050");
        MsgDisp("Honda","Ah, how about things like rhinocerous
beetles?
Both children and adults would like it.");
        MsgDisp("主人公","Ehhh?");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,3);
        VoicePlay("B040312102_03_060");
        MsgDisp("Honda","Adult bugs in the summer, larvae in the
winter. That way I could do the flea
market in any season?");
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,4);
        VoicePlay("B040312102_03_070");
        MsgDisp("Honda","I cam aim for sales, since I have lots of
them at home.");
        MsgDisp("主人公","Lots of them at home...");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,1);
        VoicePlay("B040312102_03_080");
        MsgDisp("Honda","Only that chrysalis season might be
difficult though. It might be good, a flea
market stall. Should we run a stall
together?");
        MsgDisp("主人公","(Lots of larvae huh...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0);
    VoicePlay("B040312102_03_090");
    MsgDisp("Honda","It depends on how it was presented, but
I'm sure they'll get more customers.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(3,5);
    ChMouth(3,4);
    ChMotion(3,5);
    VoicePlay("B040312102_03_100");
    MsgDisp("Honda","Is that so?
That's a difficult hurdle.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
