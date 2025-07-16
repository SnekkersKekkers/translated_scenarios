BGOpen("wf221",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4,1);
ScrFadeIn(0);
VoicePlay("B040202202_02_000");
MsgDisp("Sassa","You like cruise ships, huh?");
MsgSel("I love them!","Would somewhere else be better?","It makes me feel like I'm on vacation");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("B040202202_02_010");
    MsgDisp("Sassa","Haha, such a quick answer.
That's how much you like it, huh?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(2,0);
        ChMouth(2,2);
        ChMotion(2,4);
        VoicePlay("B040202202_02_020");
        MsgDisp("Sassa","I didn't mean it like that......");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040202202_02_030");
        MsgDisp("Sassa","Hmm, I'm not sure.
I'm honestly fine anywhere.");
        MsgDisp("主人公","Eh?");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        VoicePlay("B040202202_02_040");
        MsgDisp("Sassa","Oh, I worded it wrong.
I meant to say everywhere is fun.");
        MsgDisp("主人公","Really?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040202202_02_050");
        MsgDisp("Sassa","Do you think I would lie?
There are many places I would like to go.");
        ChEye(2,4);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040202202_02_060");
        MsgDisp("Sassa","I want to go to many different places with
you. Whether they're places I like or
don't like, it doesn't matter.
......That's the truth.");
        MsgDisp("主人公","I see.
That makes me happy.");
        ChEye(2,4);
        ChMouth(2,4);
        ChMotion(2,0);
        ChCheek(2,10);
        VoicePlay("B040202202_02_070");
        MsgDisp("Sassa","This way I can see many different sides of
you, right?
Ah, I don't mean that in a weird way.");
        MsgDisp("主人公","Hehe, I think I understand?");
        MsgDisp("主人公","(I hope ｛颯砂＊＊｝ and I can
continue going to many different places in
the future.)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040202202_02_080");
    MsgDisp("Sassa","I see.
That's a good way to enjoy yourself.
Next time, I'll try that too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
