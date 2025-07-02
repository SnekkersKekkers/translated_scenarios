BGOpen("fp200",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0,1);
ScrFadeIn(0);
VoicePlay("B040208502_02_000");
MsgDisp("Sassa","The perimeter around here,
is approximately around one 
lap in track right? ");
MsgSel("400 metres?","Why do you know that?","Should we measure your time here?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040208502_02_010");
    MsgDisp("Sassa","Yeah, correct!
If I can run around here in 40 seconds, 
I can aim at the world stage.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040208502_02_020");
    MsgDisp("Sassa","If you ask me why, 
I can only say it's a feeling.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        VoicePlay("B040208502_02_030");
        MsgDisp("Sassa","Are you saying that seriously?
Sounds good, but I'll take it
seriously you know?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040208502_02_040");
        MsgDisp("Sassa","I want to say it's good, but I can't.");
        MsgDisp("主人公","Eh?");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        VoicePlay("B040208502_02_050");
        MsgDisp("Sassa","I'm serious when I run.
Even more so if you're watching.");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        VoicePlay("B040208502_02_060");
        MsgDisp("Sassa","But if I go all out here, 
I'll hurt my ankle.");
        MsgDisp("主人公","I see.
I'm sorry for saying something weird.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040208502_02_070");
        MsgDisp("Sassa","Don't apologize. If it's the sports
ground, I can go anytime.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040208502_02_080");
        MsgDisp("Sassa","I mean, 
I think it's good when you time me.");
        MsgDisp("主人公","Eh?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040208502_02_090");
        MsgDisp("Sassa","Once I see you, I feel like I
unintentionally run in a higher gear.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040208502_02_100");
        MsgDisp("Sassa","Try cheering me on a bit as a test.");
        MsgDisp("主人公","Ehhh? Here?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,3,1);
        VoicePlay("B040208502_02_110");
        MsgDisp("Sassa","Yes, please!");
        MsgDisp("主人公","Ummm...
｛颯砂＊＊｝, do your best!");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,3);
        VoicePlay("B040208502_02_120");
        MsgDisp("Sassa","A little more seriously,");
        MsgDisp("主人公","｛颯砂＊＊｝, keep at it!∈");
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,3,1);
        VoicePlay("B040208502_02_130");
        MsgDisp("Sassa","...Crap, something's come.
I'll be of for a bit!");
        MsgDisp("主人公","Ehhh∋");
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,3);
        VoicePlay("B040208502_02_140");
        MsgDisp("Sassa","Ha!");
        MsgClose();
        SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
        ChClose(2);
        SEWait();
        MsgDisp("主人公","(He went off...
Will his ankle be okay though?)");
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
