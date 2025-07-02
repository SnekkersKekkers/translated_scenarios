BGOpen("ne330",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
ScrFadeIn(0);
VoicePlay("B040216002_02_000");
MsgDisp("Sassa","There's a lot of crane game prizes.
Is there something you want?");
MsgSel("How about that huge sweet?","The skull bear plush!","They all seem complicated?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040216002_02_010");
    MsgDisp("Sassa","Got it.
But in exchange, if I get it, 
you have to properly eat it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040216002_02_020");
    MsgDisp("Sassa","Come out, skull bear!
Girls really like this stuff huh.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        VoicePlay("B040216002_02_030");
        MsgDisp("Sassa","What do you mean by complicated?
Good thing? Bad thing?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,2);
        VoicePlay("B040216002_02_040");
        MsgDisp("Sassa","And all of them look hard to grab.");
        MsgDisp("主人公","Yeah, seems impossible huh...");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,1);
        VoicePlay("B040216002_02_050");
        MsgDisp("Sassa","...But you know, that makes 
me want to try even more.");
        MsgDisp("主人公","Eh?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040216002_02_060");
        MsgDisp("Sassa","Wait a second.");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
        ChClose(2);
        MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
        SEWait();
        MsgClose();
        SEPlay("EV_SE_544");
        ChOpen(2,253,0,0,0,-1,-1,0,0);
        SEWait();
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,2);
        VoicePlay("B040216002_02_070");
        MsgDisp("Sassa","It was no good..");
        MsgDisp("主人公","It was bad luck huh?");
        SEPlay("EV_SE_009",0,1);
        SEWait();
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,5);
        VoicePlay("B040216002_02_080");
        MsgDisp("Sassa","Ah!
It had a delayed fall∈");
        MsgDisp("主人公","Eh!");
        MsgClose();
        SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
        ChClose(2);
        MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
        SEWait();
        MsgClose();
        SEPlay("EV_SE_544");
        ChOpen(2,253,0,0,0,-1,-1,0,0);
        SEWait();
        ChEye(2,0);
        ChMouth(2,2);
        ChMotion(2,4);
        VoicePlay("B040216002_02_090");
        MsgDisp("Sassa","That...
Does that count as me winning it?");
        MsgDisp("主人公","Yeah, of course!
It's ｛颯砂＊＊｝ 's'");
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,3);
        VoicePlay("B040216002_02_100");
        MsgDisp("Sassa","You really are my goddess of victory.
If you're there, I can't lose.");
        MsgDisp("主人公","(｛颯砂＊＊｝...
I'm happy, but isn't that exaggerated...)");
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
