BGDateAfterOpen();
ChLayout(1);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgDispSksp(1,#1);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4,1);
    ScrFadeIn(0);
    VoicePlay("B060200004_02_000");
    MsgDisp("Sassa","It's just like that sometimes～
Well, it can't get any worse.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDispSksp(1,#1);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4,1);
    ScrFadeIn(0);
    VoicePlay("B060200004_02_010");
    MsgDisp("Sassa","Haa, too bad.
Even though we're finally together.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,#1);
    ChEye(2,2);
    ChMouth(2,0);
    ChMotion(2,2,1);
    ChEyeOpenLevel(2,7);
    ScrFadeIn(0);
    VoicePlay("B060200004_02_020");
    MsgDisp("Sassa","Haa...... I'm sorry you went through the
trouble of inviting me. Sometimes there
are just days like this～");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
