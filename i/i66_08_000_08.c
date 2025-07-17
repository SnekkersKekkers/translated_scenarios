BGOpen("ar300",1);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(8,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C08_DAICHI_A",0.01);
    MsgClose();
    ChOpen(8,35,0,3,3,#1,#1,0,0);
    VoicePlay("I660800008_08_000");
    MsgDisp("Shirahane","Good work.
It was pretty busy today.");
    MsgDisp("主人公","Yeah.
It's time for us to go home now, too.");
    ChEye(8,0);
    ChMouth(8,0);
    ChMotion(8,0,1);
    VoicePlay("I660800008_08_010");
    MsgDisp("Shirahane","Right.
Time for us high schoolers to get home.");
    ChEye(8,3);
    ChMouth(8,4);
    ChMotion(8,4,1);
    ChCheek(8,4);
    VoicePlay("I660800008_08_020");
    MsgDisp("Shirahane","Though I wanna stay with ya just a little
longer.");
    MsgDisp("主人公","Geez, ｛大地＊＊｝.
Hehe!");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,0,1);
    ChEyeOpenLevel(8,0);
    VoicePlay("I660800008_08_030");
    MsgDisp("Shirahane","Haha!");
    ChEyeOpenLevel(8,#1);
    VoicePlay("I660800008_40_000");
    MsgDisp("Manager","Hey, you two!
There's no more customers, so how about we
have some tea together?");
    ChEye(8,3);
    ChMouth(8,3);
    VoicePlay("I660800008_08_040");
    MsgDisp("Shirahane","...Let's.");
    MsgDisp("主人公","Yeah, let's go!");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    ChEyeOpenLevel(8,0);
    VoicePlay("I660800008_08_050");
    MsgDisp("Shirahane","Doesn't it seem like the manager really
likes us both?
Haha!");
    MsgDisp("主人公","(Hehe!
I've been working here a while, so I'm
glad.)");
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    BGMPlay("BGM_C08_DAICHI_A",0.01);
    MsgClose();
    ChOpen(8,35,0,3,3,#1,#1,0,0);
    MsgDisp("主人公","Haa...
Seems like it's calmed down a bit.");
    VoiceEVSPlay(8);
    VoicePlay("I660800008_08_060");
    MsgDisp("Shirahane","｛主人公｝.
Nice work t'day.");
    MsgDisp("主人公","｛大地＊＊｝.
Ah... hehe!
There's oil on your nose.");
    ChEye(8,5);
    ChMouth(8,5);
    ChMotion(8,1,1);
    ChCheek(8,4);
    VoicePlay("I660800008_08_070");
    MsgDisp("Shirahane","Huh, really?
Where at?");
    MsgDisp("主人公","Ah, don't.
It'll spread if you rub it!
Just wait a bit...");
    ChEye(8,2);
    ChMouth(8,4);
    ChCheek(8,7);
    VoicePlay("I660800008_08_080");
    MsgDisp("Shirahane","Ah, 'kay...");
    MsgDisp("主人公","There, I got it.
... What is it?");
    ChEye(8,4);
    ChMouth(8,4);
    ChMotion(8,4,1);
    ChCheek(8,8);
    VoicePlay("I660800008_08_090");
    MsgDisp("Shirahane","Ah no...
My heart's poundin'-");
    ChEye(8,5);
    ChMouth(8,1);
    ChMotion(8,1,1);
    ChCheek(8,10);
    VoicePlay("I660800008_40_010");
    MsgDisp("Manager","You two over there, save that for after
work!");
    MsgDisp("主人公","...Looks like the manager got mad at us?");
    ChEye(8,2);
    ChMouth(8,4);
    ChMotion(8,4,1);
    ChCheek(8,6);
    VoicePlay("I660800008_08_100");
    MsgDisp("Shirahane","Nah, that's not it.
That's their playing voice, they're not
actually mad.");
    ChEye(8,2);
    ChMouth(8,3);
    ChMotion(8,0,1);
    VoicePlay("I660800008_08_110");
    MsgDisp("Shirahane","The other day, they even said \"if you two
take over this place, I can finally
retire\".");
    MsgDisp("主人公","Huh?");
    ChEye(8,3);
    ChMouth(8,3);
    VoicePlay("I660800008_08_120");
    MsgDisp("Shirahane","We're being relied on, th' two of us.
So, don't worry 'bout it.");
    ChEye(8,2);
    ChMouth(8,0);
    ChMotion(8,2,1);
    VoicePlay("I660800008_08_130");
    MsgDisp("Shirahane","... But I don't really wanna take over the
store, do you?
Right?");
    MsgDisp("主人公","(Hehe!
I've been working here a while, and it
looks like I've been acknowledged...!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop()MsgClose();
ScrFadeOut(0);
