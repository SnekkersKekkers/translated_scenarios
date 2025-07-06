BGOpen("wf221",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4,1);
ScrFadeIn(0);
VoicePlay("B040602202_06_000");
MsgDisp("Himuro","What's wrong?
...Are you thinking about something?");
MsgSel("I was thinking about｛氷室＊＊｝","It's nothing","I'm worrying about my tests...");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040602202_06_010");
        MsgDisp("Himuro","If you have something
to say, just say it?
Since I'm here anyways? ");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,0);
        ChMouth(6,5);
        ChMotion(6,5);
        ChCheek(6,10);
        VoicePlay("B040602202_06_020");
        MsgDisp("Himuro","Hey——∋");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040602202_06_030");
        MsgDisp("Himuro","...If there's something you're curious
about, Why don't you ask me directly?");
        MsgDisp("主人公","T-That's true huh?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040602202_06_040");
        MsgDisp("Himuro","Besides, if you suddenly
say something like that——");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        VoicePlay("B040602202_06_050");
        MsgDisp("Himuro","...No, it's nothing.
Just a bit dubious.");
        MsgDisp("主人公","Eh? Dubious?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        ChCheek(6,0);
        VoicePlay("B040602202_06_060");
        MsgDisp("Himuro","So, what were you thinking about?
Answer in 20 characters or less.");
        MsgDisp("主人公","Ehhh∋");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040602202_06_070");
        MsgDisp("Himuro","Shall we set up a time limit?
Then, I'll give you 30 seconds.");
        MsgDisp("主人公","W-Wait a second!");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040602202_06_080");
        MsgDisp("Himuro","３０、２９、２８、２７――");
        MsgDisp("主人公","Like I said, that...");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040602202_06_090");
        MsgDisp("Himuro","......３,２,１——Yeah, you're out.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040602202_06_100");
        MsgDisp("Himuro","I'll set this as homework.
Submit it next time");
        MsgDisp("主人公","Submit∋");
        ChEye(6,0);
        ChMouth(6,1);
        ChMotion(6,1);
        ChCheek(6,10);
        VoicePlay("B040602202_06_110");
        MsgDisp("Himuro","As punishment for teasing people.");
        MsgDisp("主人公","(I didn't mean to do that though...!)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040602202_06_120");
    MsgDisp("Himuro","Ah, right.
Then, that's fine.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040602202_06_130");
    MsgDisp("Himuro","Study anxiety can be 
relieved just by studying.
If you're motivated, I can teach you?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
