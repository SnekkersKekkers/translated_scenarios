BGOpen("wf320",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040303202_03_000");
MsgDisp("Honda","The idea of aquatic organisms swimming in
the sky is interesting.");
MsgSel("It'd be amazing if deep-sea fish swam in the sky.","It'd be very popular; a must-see!","Yeah, just like carp windsocks.");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(3,4);
        ChMouth(3,2);
        ChMotion(3,2);
        VoicePlay("B040303202_03_010");
        MsgDisp("Honda","Deep-sea fish are really sensitive.
They can't survive in outdoor
environments.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,2);
        VoicePlay("B040303202_03_020");
        MsgDisp("Honda","That's unrealistic...");
        MsgDisp("主人公","Sorry, I said something weird.");
        ChEye(3,1);
        ChMouth(3,4);
        ChMotion(3,4);
        VoicePlay("B040303202_03_030");
        MsgDisp("Honda","No, no. I'm the one who should be
apologizing. Viewing deep-sea creatures in
above-ground tanks is already pretty
absurd.");
        MsgDisp("主人公","Yeah, I guess so.");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,3);
        VoicePlay("B040303202_03_040");
        MsgDisp("Honda","Yeah! So, with a bit more research, an
exhibit featuring deep-sea fish 'swimming'
in the sky might be possible, right? I'm
getting really excited∈");
        MsgDisp("主人公","Hehe, ｛本多＊＊｝ looks like
you're having fun.");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,1);
        ChEyeOpenLevel(3,0);
        VoicePlay("B040303202_03_050");
        MsgDisp("Honda","Yup!
You're the best at breaking down my boring
fixed ideas∈");
        MsgDisp("主人公","I'm glad but...
You're exaggerating.");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,4);
        VoicePlay("B040303202_03_060");
        MsgDisp("Honda","But, if you weren't with me, my deep-sea
fish would have never been able to fly
through the sky.");
        MsgDisp("主人公","(I'd be very happy if I was able to
inspire ｛本多＊＊｝ )");
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
    VoicePlay("B040303202_03_070");
    MsgDisp("Honda","That's right.
It might be worth thinking about what
attracts people to this facility.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("B040303202_03_080");
    MsgDisp("Honda","That's true. People have been making fish
swim in the sky since long ago. Look at
kites, for example.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
