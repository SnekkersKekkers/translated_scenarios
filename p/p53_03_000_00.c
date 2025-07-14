BGOpen("sc740",0);
BGMStop();
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","(It's almost time for the real
performance.
I'm getting nervous...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(3,254,0,0,4,#1,#1,0,0);
    VoiceEVSPlay(3);
    VoicePlay("P530300000_03_000");
    MsgDisp("Honda","｛主人公｝, What's the matter?");
    MsgDisp("主人公","Ah, ｛本多＊＊｝... I'm a bit nervous...");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4,1);
    VoicePlay("P530300000_03_010");
    MsgDisp("Honda","Eh, is that right?
Even though you like the song?");
    MsgDisp("主人公","Umm... yeah. I was thinking it would be
awful if it were a failure.");
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,1,1);
    VoicePlay("P530300000_03_020");
    MsgDisp("Honda","No such thing as failure.
Even if it changes a little, it's your
original arrangement.");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("P530300000_03_030");
    MsgDisp("Honda","I came to hear your musical performance.
I'll enjoy it even more if it's different
to usual.");
    MsgDisp("主人公","Y-Yeah.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("P530300000_03_040");
    MsgDisp("Honda","Hey, now please give us a performance only
you can do!");
    MsgDisp("主人公","(That means to do what I can, right...
Alright, I'll do my best.)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(It's almost time for the real
performance.
I'm getting nervous...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(3,254,0,0,0,#1,#1,0,0);
    VoicePlay("P530300000_03_050");
    MsgDisp("Honda","Huh, you look nervous.");
    MsgDisp("主人公","Ah, ｛本多＊＊｝. When I see the audience,
my heart starts pounding...");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,2,1);
    VoicePlay("P530300000_03_060");
    MsgDisp("Honda","HmmmーAh.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4,1);
    VoiceEVSPlay(3);
    VoicePlay("P530300000_03_070");
    MsgDisp("Honda","｛主人公｝. Can you copy me?");
    MsgDisp("主人公","Eh... y-yeah.");
    ChEye(3,4);
    ChMouth(3,3);
    VoicePlay("P530300000_03_080");
    MsgDisp("Honda","Can you feel your own heartbeat?");
    MsgDisp("主人公","...Yeah.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("P530300000_03_090");
    MsgDisp("Honda","These slight pulsations
help me relax.");
    MsgDisp("主人公","Y-Yeah.
Maybe I calmed down a little?");
    ChEye(3,5);
    ChMouth(3,4);
    ChMotion(3,5,1);
    SEPlay("EV_SE_038");
    SEWait();
    VoicePlay("P530300000_03_100");
    MsgDisp("Honda","Waa∋ That startled me. That sounded like
the buzzer for a wrong answer.");
    MsgDisp("主人公","Hehe, are you okay?
EVen though you specifically wanted to
relax?");
    MsgDisp("主人公","(Huh... thanks to ｛本多＊＊｝, It seems
like I'm not anxious anymore. Yeah, I'll
give it my best. )");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
BGOpen("sc725",0);
ScrFadeIn(0);
