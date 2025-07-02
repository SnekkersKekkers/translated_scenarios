switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","(What should I do
about my partner......)");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChOpen(3,30,0,0,0,-1,-1,0,0);
    VoicePlay("O030301000_03_000");
    MsgDisp("Honda","Could it be that you're still
looking for a partner?");
    MsgDisp("主人公","Ah, ｛本多＊＊｝.
Yeah, I haven't found one yet.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("O030301000_03_010");
    MsgDisp("Honda","Thank goodness, me too.
Then, do you want to be a team?");
    MsgDisp("主人公","Yeah!");
    break ;
    case 3:
    MsgDisp("主人公","(What should I do
about my partner......)");
    MsgClose();
    SEPlay("EV_SE_625");
    SEWait();
    ChOpen(3,30,0,0,0,-1,-1,0,0);
    VoiceEVSPlay(3);
    VoicePlay("O030301000_03_020");
    MsgDisp("Honda","｛主人公｝,
What's up?");
    MsgDisp("主人公","Ah, ｛本多＊＊｝.
I haven't found a partner for the
three-legged race, yet......");
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,1,1);
    VoicePlay("O030301000_03_030");
    MsgDisp("Honda","There's one right in
front of you, though?");
    MsgDisp("主人公","Huh, ｛本多＊＊｝?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("O030301000_03_040");
    MsgDisp("Honda","Yeah yeah.
If you'll have me.");
    MsgDisp("主人公","Yeah, of course.
Let's do this!");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(What should I do
about my partner......)");
    MsgClose();
    SEPlay("EV_SE_671");
    SEWait();
    ChOpen(3,30,5,2,4,-1,-1,0,0);
    VoicePlay("O030301000_03_050");
    MsgDisp("Honda","Da, I'm late!");
    MsgDisp("主人公","Huh, ｛本多＊＊｝?");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,1,1);
    VoicePlay("O030301000_03_060");
    MsgDisp("Honda","Hey hey, who are you going with?
Can I negotiate with them?");
    MsgDisp("主人公","N, negotiate?
What are you talking about?");
    ChEye(3,4);
    ChMotion(3,0);
    VoicePlay("O030301000_03_070");
    MsgDisp("Honda","You already have a partner for the
three-legged race, right? So I was going
to ask that person to switch with me.");
    MsgDisp("主人公","Um, I don't have a partner yet,
you know?");
    ChEye(3,5);
    ChMouth(3,4);
    ChMotion(3,5);
    VoicePlay("O030301000_03_080");
    MsgDisp("Honda","......What!?　Is that true!?");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("O030301000_03_090");
    MsgDisp("Honda","Then......
Can you team up with me?");
    MsgDisp("主人公","Hehe, of course.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("O030301000_03_100");
    MsgDisp("Honda","Yay!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
