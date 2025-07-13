ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgClose();
    ScrFadeIn(0);
    ChOpen(1,254,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(1);
    VoicePlay("H280100000_01_000");
    MsgDisp("Kazama","｛主人公｝.");
    MsgDisp("主人公","｛風真＊＊｝, what's up?");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("H280100000_01_010");
    MsgDisp("Kazama","I came to see the track team that you've
invested so much into.");
    MsgDisp("主人公","I see.
Everyone's feeling great, so I think we
can aim for first place overall!");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,1);
    VoicePlay("H280100000_01_020");
    MsgDisp("Kazama","First place overall, huh......
If only there was a manager category,
then you guys would definitely win.");
    MsgDisp("主人公","Hehe, there's no category like that.");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("H280100000_01_030");
    MsgDisp("Kazama","If you do win first place overall,
will you get a medal too?");
    MsgDisp("主人公","Maybe?");
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("H280100000_01_040");
    MsgDisp("Kazama","Alright.
Then, I guess I'll get serious about
cheering.");
    MsgDisp("主人公","(Let's win the overall championship,
to respond to ｛風真＊＊｝'s cheers,
too!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(1,254,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(1);
    VoicePlay("H280100000_01_050");
    MsgDisp("Kazama","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝.
Did you come to cheer us on?");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H280100000_01_060");
    MsgDisp("Kazama","Yeah.
Even though I did, there's not much
I can really do for you, though.");
    MsgDisp("主人公","That's not true.
If you cheer us on, the team will
become more motivated!");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("H280100000_01_070");
    MsgDisp("Kazama","You're a good manager.
Maybe I should've done track too?");
    MsgDisp("主人公","Hm?");
    ChEye(1,4);
    ChMouth(1,4);
    ChMotion(1,4);
    VoicePlay("H280100000_01_080");
    MsgDisp("Kazama","I was just thinking that the team
must be pretty happy, having such
dedicated support.");
    ChMotion(1,0);
    MsgDisp("主人公","｛風真＊＊｝......");
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("H280100000_01_090");
    MsgDisp("Kazama","Just for today, I'll lend you to
the track team. Look, everyone's waiting
for you.");
    MsgDisp("主人公","(｛風真＊＊｝, thank you.
Alright, we'll all definitely win
today!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
