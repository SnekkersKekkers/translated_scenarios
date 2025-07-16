MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
BGOpen("ex020",0);
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    ScrFadeIn(0);
    VoicePlay("S120100000_01_000");
    MsgDisp("Kazama","This is it.
The best way to start the year.");
    MsgDisp("主人公","Yeah.
Thank you for coming with me.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("S120100000_01_010");
    MsgDisp("Kazama","It's good to be honest.
That's my request for you this year.");
    MsgDisp("主人公","Geez......
Even this year, ｛風真＊＊｝ is
the same as always.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("S120100000_01_020");
    MsgDisp("Kazama","I feel the same way about you.
Cya.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(1);
    MsgDisp("主人公","(I hope this year will be another good
year.)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 3:
    ChEye(1,4);
    ChMouth(1,4);
    ChMotion(1,1);
    ChEyeOpenLevel(1,0);
    ScrFadeIn(0);
    VoicePlay("S120100000_01_030");
    MsgDisp("Kazama","Phew, that felt good......
I feel refreshed somehow.");
    MsgDisp("主人公","Hehe, me too.");
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("S120100000_01_040");
    MsgDisp("Kazama","Hmm, somehow you always seem refreshed
though.");
    MsgDisp("主人公","Hmm?
What do you mean?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("S120100000_01_050");
    MsgDisp("Kazama","That. Just like that. Innocent, I guess? I
guess you were just born that way.");
    MsgDisp("主人公","......Are you praising me?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("S120100000_01_060");
    MsgDisp("Kazama","Nothing but praise.
Thanks to you, I'm energized.
Let me take you home.");
    SEPlay("EV_SE_856");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    SEWait();
    break ;
    case 4:
    case 5:
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    ScrFadeIn(0);
    ChEye(1,0);
    ChMouth(1,4);
    ChMotion(1,1);
    VoicePlay("S120100000_01_070");
    MsgDisp("Kazama","Going to the shrine with you felt like a
distant dream.");
    MsgDisp("主人公","Is this your first time? Hmm......Didn't
you go before in when we were in
kindergarten?");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("S120100000_01_080");
    MsgDisp("Kazama","But not together.
We might have just passed by each other at
the shrine by chance.");
    MsgDisp("主人公","｛風真＊＊｝ as a
kindergartener, how cute......");
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("S120100000_01_090");
    MsgDisp("Kazama","Hey, are you forgetting something?
I remember you from back then way more
than you remember me......");
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,1);
    ChEyeOpenLevel(1,8);
    ChCheek(1,5);
    VoicePlay("S120100000_01_100");
    MsgDisp("Kazama","You've grown a bit more than I would have
expected......");
    MsgDisp("主人公","I've grown?");
    ChEye(1,0);
    ChMouth(1,1);
    ChMotion(1,3);
    ChCheek(1,10);
    VoicePlay("S120100000_01_110");
    MsgDisp("Kazama","It means that you're growing into a great
person. Let me take you home so you don't
run into any strange people.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO_LONG");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    SEWait();
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
