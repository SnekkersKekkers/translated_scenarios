BGOpen("tr510",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040524102_05_000");
MsgDisp("Hiiragi","Cow, horse, sheep...
Which animal should we play with?");
MsgSel("Let's drink freshly sueezed milk!","I want to shear sheep wool!","I want to ride a pony!");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(5,2);
        ChMouth(5,2);
        ChEyeOpenLevel(5,9);
        VoicePlay("B040524102_05_010");
        MsgDisp("Hiiragi","But it's lukewarm...
Why not have it in ice cream?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,0);
        ChMouth(5,4);
        ChMotion(5,4);
        VoicePlay("B040524102_05_020");
        MsgDisp("Hiiragi","I personally do not like warm milk, 
so you'll be the one drinking it.");
        MsgDisp("主人公","Ehh? It's troubling to be in charge of
that. Then, shall we do something else?");
        ChEye(5,4);
        ChMotion(5,0);
        VoicePlay("B040524102_05_030");
        MsgDisp("Hiiragi","No, I am interested in milking a cow.");
        MsgDisp("主人公","It'll definitely be interesting...");
        ChEye(5,3);
        VoicePlay("B040524102_05_040");
        MsgDisp("Hiiragi","Yes, 
rhythm will be somewhat important.");
        ChEye(5,3);
        ChMotion(5,3);
        VoicePlay("B040524102_05_050");
        MsgDisp("Hiiragi","Like, \"One, two, 
squeezeーー\" I suppose?");
        MsgClose();
        ScrFadeOut(0,0);
        MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
        VoicePlay("B040524102_05_060");
        MsgDisp("Hiiragi","One, two, squeezeーー!");
        SEPlay("EV_SE_521",0.1,0.7);
        SEWait();
        MsgDisp("主人公","One, two, squeezeーー!");
        SEPlay("EV_SE_521",0.2,0.6);
        SEWait();
        VoicePlay("B040524102_05_070");
        MsgDisp("Hiiragi","One, two, squeezeーー!");
        SEPlay("EV_SE_521",0,0.8);
        SEWait();
        MsgClose();
        MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
        MsgClose();
        BGOpen("tr500",1);
        ChEye(5,3);
        ChMouth(5,3);
        ChMotion(5,0,1);
        ScrFadeIn(0);
        VoicePlay("B040524102_05_080");
        MsgDisp("Hiiragi","It has gotten late, hasn't it?");
        MsgDisp("主人公","Yeah, but it was fun.
Did you enjoy it, ｛柊＊＊＊｝?");
        ChEye(5,4);
        ChMouth(5,4);
        VoicePlay("B040524102_05_090");
        MsgDisp("Hiiragi","Thanks to you, I was able to have
a fun and delicious experience.");
        ChEye(5,4);
        ChMouth(5,3);
        ChMotion(5,4);
        VoicePlay("B040524102_05_100");
        MsgDisp("Hiiragi","You should try everything once.
we're the only ones who 
did it twice right?");
        MsgDisp("主人公","Yeah. Thanks to that, we might have gotten
a bit better at milking.");
        ChEye(5,0);
        ChMouth(5,4);
        VoicePlay("B040524102_05_110");
        MsgDisp("Hiiragi","If we told Mikage sensei this I wonder if
he would be surprised...");
        ChEye(5,3);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("B040524102_05_120");
        MsgDisp("Hiiragi","...Hm?
Actually, I won't tell him after all.
It would be a shame to tell others.");
        MsgDisp("主人公","Hehe, that's right.");
        ChEye(5,4);
        ChMouth(5,4);
        ChMotion(5,4);
        VoicePlay("B040524102_05_130");
        MsgDisp("Hiiragi","When I'm with you, anything can become a
wonderful experience. I understood that
well today.");
        ChEye(5,3);
        VoicePlay("B040524102_05_140");
        MsgDisp("Hiiragi","And you change me so easily.
You're fun, you're lovely, 
and a bit of a scary person.");
        MsgDisp("主人公","Ehh? Scary?");
        ChEye(5,3);
        ChMouth(5,4);
        ChMotion(5,0);
        VoicePlay("B040524102_05_150");
        MsgDisp("Hiiragi","Because, even my sense of taste has
changed... Even when it's warm, milk is
delicious.");
        MsgDisp("主人公","(Yeah, it was fun.
From now on too, I hope I can do lots of
different things with ｛柊＊＊＊｝...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(2);
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040524102_05_160");
    MsgDisp("Hiiragi","I feel like it might be dangerous.
Let's just watch.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,3);
    ChMouth(5,4);
    VoicePlay("B040524102_05_170");
    MsgDisp("Hiiragi","That should be reassuring.
But please be careful.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
