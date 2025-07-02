BGOpen("fp200",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,1);
ChMotion(6,0);
ChEyeOpenLevel(6,0);
ScrFadeIn(0);
VoicePlay("B040608202_06_000");
MsgDisp("Himuro","Haaa...");
MsgSel("That was a big yawn!","Was it boring?","Did you not sleep enough?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChCheek(6,10);
    VoicePlay("B040608202_06_010");
    MsgDisp("Himuro","I'm human, so I do yawn.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        VoicePlay("B040608202_06_020");
        MsgDisp("Himuro","No... not really?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,4);
        ChMouth(6,0);
        ChMotion(6,4);
        ChCheek(6,10);
        VoicePlay("B040608202_06_030");
        MsgDisp("Himuro","I was just a bit careless.
Forget about it.");
        MsgDisp("主人公","…………");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        VoicePlay("B040608202_06_040");
        MsgDisp("Himuro","I don't really get bored.
You can relax.");
        ChEye(6,0);
        ChMouth(6,2);
        ChMotion(6,0);
        VoicePlay("B040608202_06_050");
        MsgDisp("Himuro","...I just let my guard 
down next to you.");
        MsgDisp("主人公","Eh, is that so?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,3);
        ChCheek(6,0);
        VoicePlay("B040608202_06_060");
        MsgDisp("Himuro","Yeah.
I need to focus a bit more.");
        MsgDisp("主人公","That's not necessary.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040608202_06_070");
        MsgDisp("Himuro","No, I don't want to show 
the shameful parts of myself.
Especially... not to you.");
        MsgDisp("主人公","(Actually, I would like to see it...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("B040608202_06_080");
    MsgDisp("Himuro","That's not a bad suggestion.
I've heard that a decent afternoon 
nap boosts efficiency.
How about we lie down on the grass?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
