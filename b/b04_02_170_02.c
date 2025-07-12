BGOpen("ne340",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4,1);
ScrFadeIn(0);
VoicePlay("B040217002_02_000");
MsgDisp("Sassa","Hey, we have to keep going, 
or we'll waste time.");
MsgSel("Let's think of it like practice?","Actually, I'm hungry...","You go first");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,1);
    VoicePlay("B040217002_02_010");
    MsgDisp("Sassa","Alright, let's go for 100 songs starting
now! Let's go?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B040217002_02_020");
    MsgDisp("Sassa","The food here is also pretty good.
Then, why don't we stop singing and eat?");
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
        ChMouth(2,2);
        ChMotion(2,0);
        VoicePlay("B040217002_02_030");
        MsgDisp("Sassa","Huh, what's up with you today?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        Wait(20,0);
        BGMPlay("BGM_KARAOKE_BALLAD",0.01);
        Wait(25,0);
        ChEye(2,0);
        ChMouth(2,2);
        ChMotion(2,4);
        VoicePlay("B040217002_02_040");
        MsgDisp("Sassa","Eh? You've already put in a song?");
        MsgDisp("主人公","Yeah, it's a popular number one after all.");
        ChEye(2,0);
        ChMouth(2,2);
        ChMotion(2,0);
        ChEyeOpenLevel(2,8);
        VoicePlay("B040217002_02_050");
        MsgDisp("Sassa","\"I'll love you even a thousand years from
now\"...");
        BGMStop(2.5);
        ChClose(2);
        Wait(90,0);
        MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
        MsgClose();
        ChOpen(2,253,0,0,0,#1,#1,0,0);
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        ChCheek(2,10);
        VoicePlay("B040217002_02_060");
        MsgDisp("Sassa","…………");
        MsgDisp("主人公","It's a wonderful song huh?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,0);
        VoicePlay("B040217002_02_070");
        MsgDisp("Sassa","Aren't the lyrics exactly 
like a full-on marriage proposal?");
        MsgDisp("主人公","Yeah.
I think it's somewhat moving.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040217002_02_080");
        MsgDisp("Sassa","I see.
...Then, what's your answer?");
        MsgDisp("主人公","(Ummm...
When you say answer...)");
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
