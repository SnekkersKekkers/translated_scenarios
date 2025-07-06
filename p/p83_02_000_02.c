BGMStop();
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc605",0);
    ScrFadeIn(0);
    VoicePlay("P830200002_48_000");
    MsgDisp("School Girl","Excuse me. The smell of the yakisoba stand
next door quite strong, It's bothering
us....");
    MsgDisp("主人公","Eh?");
    VoicePlay("P830200002_48_010");
    MsgDisp("School Girl","It's ruining the flavour of our matcha
stand.");
    MsgDisp("主人公","Ah, yes.
Please avoid complaining to them directly.
Management will talk to them.");
    VoicePlay("P830200002_48_020");
    MsgDisp("School Girl","Please be quick. ");
    MsgClose();
    SEPlay("EV_SE_DOOR_019");
    SEWait();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(2,254,0,0,4,-1,-1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("P830200002_02_000");
    MsgDisp("Sassa","｛主人公｝, 
it must be difficult to be in
the student council, huh?");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝.
That is also an important part of
management work, so it's alright.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,1);
    VoicePlay("P830200002_02_010");
    MsgDisp("Sassa","Is that so?
But, I'll go with you too.
Leave the bodyguard duties to me.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("P830200002_02_020");
    MsgDisp("Sassa","In exchange, 
When this has been settled, 
let's walk around together.");
    MsgDisp("主人公","Yeah, got it!");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(2,0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc605",0);
    ScrFadeIn(0);
    VoicePlay("P830200002_48_030");
    MsgDisp("School Girl","Excuse me. The smell of the yakisoba stand
next door quite strong, It's bothering
us....");
    MsgDisp("主人公","Eh?");
    VoicePlay("P830200002_48_040");
    MsgDisp("School Girl","It's ruining the flavour of our matcha
stand.");
    MsgDisp("主人公","Ah, yes.
Please avoid complaining to them directly.
Management will talk to them.");
    VoicePlay("P830200002_48_050");
    MsgDisp("School Girl","Please be quick.");
    SEPlay("EV_SE_DOOR_019");
    SEWait();
    VoiceEVSPlay(2);
    VoicePlay("P830200002_02_030");
    MsgDisp("Sassa?","｛主人公｝.");
    MsgDisp("主人公","Ah, yes!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(2,254,4,0,0,-1,-1,0,0);
    VoicePlay("P830200002_02_040");
    MsgDisp("Sassa","It's me.
You seem like you're having a tough time.
Are you alright?");
    MsgDisp("主人公","Y-Yeah.
It's part of management, 
so it can't be helped.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("P830200002_02_050");
    MsgDisp("Sassa","I see. I came carelessly to invite you to
hang out, but that seems like it'll be
difficult.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("P830200002_02_060");
    MsgDisp("Sassa","There's a quarrel right?
I'm free, so I'll help you.");
    MsgDisp("主人公","Thank you.
but ｛颯砂＊＊｝ won't be able 
to enjoy the cultural festival?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("P830200002_02_070");
    MsgDisp("Sassa","If I'm with you,
I would enjoy even a fight.");
    MsgDisp("主人公","(It'd be troubling if you enjoyed that
but... If ｛颯砂＊＊｝ is there, that's
reassuring!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(2,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
