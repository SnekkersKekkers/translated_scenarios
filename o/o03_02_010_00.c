switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","(What should I do
about my partner......)");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChOpen(2,30,0,0,0,-1,-1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("O030201000_02_000");
    MsgDisp("Sassa","｛主人公｝.
Do you have a partner?");
    MsgDisp("主人公","No, not yet.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("O030201000_02_010");
    MsgDisp("Sassa","Then, let's run together!");
    MsgDisp("主人公","Yeah!");
    break ;
    case 3:
    MsgDisp("主人公","(What should I do
about my partner......)");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChOpen(2,30,3,0,3,-1,-1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("O030201000_02_020");
    MsgDisp("Sassa","｛主人公｝.
Let's do the three-legged race together!");
    MsgDisp("主人公","Really?
I was just looking for a partner!");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("O030201000_02_030");
    MsgDisp("Sassa","Alright, we're definitely
winning, 'kay?
Let's show them all our speed.");
    MsgDisp("主人公","Hehe, yeah.
Please go easy on me.");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(What should I do
about my partner......)");
    MsgClose();
    SEPlay("EV_SE_671");
    SEWait();
    ChOpen(2,30,4,0,0,-1,-1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("O030201000_02_040");
    MsgDisp("Sassa","｛主人公｝.
Did I made it in time!?");
    MsgDisp("主人公","Hm?
｛颯砂＊＊｝, what is it?");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("O030201000_02_050");
    MsgDisp("Sassa","Your legs aren't tied to
anyone else's yet.");
    MsgDisp("主人公","Um......
I don't have a partner yet.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("O030201000_02_060");
    MsgDisp("Sassa","Then, I'll nominate myself!");
    MsgDisp("主人公","Really?");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("O030201000_02_070");
    MsgDisp("Sassa","Of course!
If we work together,
we'll have no enemies left.");
    MsgDisp("主人公","Yeah, I'll do my best!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0);
ChClose(2,0,0);
