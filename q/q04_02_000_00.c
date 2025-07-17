switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","(I wonder if ｛颯砂＊＊｝ is
here...
Ah, there he is!)");
    MsgDisp("主人公","｛颯砂＊＊｝.
Good morning!");
    MsgClose();
    SEPlay("EV_SE_544");
    ChOpen(2,254,3,0,4,#1,#1,0,0);
    VoicePlay("Q040200000_02_000");
    MsgDisp("Sassa","Morning.
You look like you're in tip-top condition,
huh?");
    MsgDisp("主人公","Yeah. Hey, why don't we go together for today's free period?");
    break ;
    case 3:
    MsgDisp("主人公","｛颯砂＊＊｝.
Good morning!");
    MsgClose();
    SEPlay("EV_SE_544");
    ChOpen(2,254,3,0,4,#1,#1,0,0);
    VoicePlay("Q040200000_02_010");
    MsgDisp("Sassa","Oh, morning.
You look energetic.");
    MsgDisp("主人公","Yeah!
Wanna go together for today's free time?");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","｛颯砂＊＊｝, morning!
Did you sleep well?");
    MsgClose();
    SEPlay("EV_SE_544");
    ChOpen(2,254,3,0,4,#1,#1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("Q040200000_02_020");
    MsgDisp("Sassa","｛主人公｝, morning!
Yeah, absolutely.
As usual, I did my morning jog.");
    MsgDisp("主人公","Eh?
So you left the hotel?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("Q040200000_02_030");
    MsgDisp("Sassa","I was just running around the hotel.");
    MsgDisp("主人公","So you left...");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("Q040200000_02_040");
    MsgDisp("Sassa","I mean, wouldn't it be annoying if I ran
inside the lobby?
... Anyways, what's up?");
    MsgDisp("主人公","Oh, right.
If you're fine with it, do you want to go
around together for today's free period?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
