BGOpen("wf610",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0,1);
ScrFadeIn(0);
VoicePlay("B040206202_02_000");
MsgDisp("Sassa","If we were on a deserted island, maybe
this cave would be our base camp?");
MsgSel("Wouldn't it get flooded during high tide?","Eh? A deserted island?","First we'd need to start a fire！");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,5);
    VoicePlay("B040206202_02_010");
    MsgDisp("Sassa","My bad, you're right!
I'm glad you're here.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040206202_02_020");
        MsgDisp("Sassa","It's just a \"what if\" story.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040206202_02_030");
        MsgDisp("Sassa","Yeah.
What would you do if there were just the
two of us and we had to survive?");
        MsgDisp("主人公","I guess being with you would be
reassuring?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040206202_02_040");
        MsgDisp("Sassa","What do you mean by \"I guess\"?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,3);
        VoicePlay("B040206202_02_050");
        MsgDisp("Sassa","I could do anything as long as you were by
my side.");
        MsgDisp("主人公","Hehe, that's reassuring.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,3);
        VoicePlay("B040206202_02_060");
        MsgDisp("Sassa","Alright.
I would gather all the food.
And you would cook.");
        ChEye(2,0);
        ChMouth(2,2);
        ChMotion(2,2);
        VoicePlay("B040206202_02_070");
        MsgDisp("Sassa","Having your home-cooked meals
everyday......Yeah, survival like that
wouldn't be half bad.");
        MsgDisp("主人公","｛颯砂＊＊｝?
What's wrong?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,3);
        VoicePlay("B040206202_02_080");
        MsgDisp("Sassa","I think catching some fish for dinner will
be the fastest.
Is that okay with you?");
        MsgDisp("主人公","(He's already starting the survival......)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,1);
    VoicePlay("B040206202_02_090");
    MsgDisp("Sassa","Yeah, that's good.
I'll go get us some fish.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
