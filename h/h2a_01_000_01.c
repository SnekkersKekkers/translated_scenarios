BGOpen("sc624",0);
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_D",0.01);
    ChOpen(1,254,0,0,0,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("H2A0100001_01_000");
    MsgDisp("Kazama","It was close.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝......");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H2A0100001_01_010");
    MsgDisp("Kazama","I'm sure everyone is already happy
enough that we came this close to winning
the championships, right?");
    MsgDisp("主人公","Yeah.
A lot of them set new personal bests.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H2A0100001_01_020");
    MsgDisp("Kazama","You too.
I know you put your all into this.");
    MsgDisp("主人公","Y-Yeah......");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H2A0100001_01_030");
    MsgDisp("Kazama","Come on, show me your usual
cheerful face.");
    MsgDisp("主人公","(Yeah......
It's frustrating, but I'm glad I did
my best. Thank you, ｛風真＊＊｝!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_D",0.01);
    ChOpen(1,254,0,4,3,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("H2A0100001_01_040");
    MsgDisp("Kazama","......You did your best.");
    MsgDisp("主人公","｛風真＊＊｝......
But we didn't win the championships.");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H2A0100001_01_050");
    MsgDisp("Kazama","You were just one step away.
But the members were doing their best,
right?");
    MsgDisp("主人公","Yes......");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H2A0100001_01_060");
    MsgDisp("Kazama","I think everyone's grateful for you.
If they weren't, I wouldn't forgive them.");
    MsgDisp("主人公","Hehe.
......Yeah, thanks.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H2A0100001_01_070");
    MsgDisp("Kazama","Here comes your last job.
This is the time to show everyone what
you've got, right? Everyone's waiting.");
    MsgDisp("主人公","Yeah......!");
    MsgDisp("主人公","(That's right.
We all did our best, so let's end it
on a high note!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
