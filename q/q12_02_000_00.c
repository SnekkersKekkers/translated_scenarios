BGOpen("sc810",0);
ScrFadeIn(0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoiceEVSPlay(2);
    VoicePlay("Q120200000_02_000");
    MsgDisp("Sassa","｛主人公｝, thanks for wandering around
with me.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("Q120200000_02_010");
    MsgDisp("Sassa","Are you tired?");
    MsgDisp("主人公","I'm totally fine.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("Q120200000_02_020");
    MsgDisp("Sassa","As expected.
There's only one day left, but let's enjoy
it to the end.");
    MsgDisp("主人公","Yeah!");
    break ;
    case 3:
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("Q120200000_02_030");
    MsgDisp("Sassa","That went by so fast.
That was fun.");
    MsgDisp("主人公","Yeah. It was fun to go around with you,
｛颯砂＊＊｝.");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("Q120200000_02_040");
    MsgDisp("Sassa","Me too.
I'm glad I got to do ultra-max sightseeing
with you.");
    MsgDisp("主人公","Hehe!
We looked a lot, didn't we.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("Q120200000_02_050");
    MsgDisp("Sassa","Yeah, you must be tired.
Let's go to the big bath after this, to
stretch out our legs and relax.");
    MsgDisp("主人公","That sounds good.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,2);
    VoicePlay("Q120200000_02_060");
    MsgDisp("Sassa","See you later!
I'm aiming for the best bath.");
    MsgClose();
    SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
    MsgClose();
    ChClose(2);
    MsgDisp("主人公","(Hehe! It was so much fun going around
with you, ｛颯砂＊＊｝! )");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","So tomorrow is the end of the school
trip......
It went by so fast, didn't it?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("Q120200000_02_070");
    MsgDisp("Sassa","Because we went ultra-max sightseeing
together, So I'm very satisfied.");
    MsgDisp("主人公","Hehe. I also enjoyed looking with you,
｛颯砂＊＊｝.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("Q120200000_02_080");
    MsgDisp("Sassa","......Ah, wait.
There's one thing left.");
    MsgDisp("主人公","Eh, what?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("Q120200000_02_090");
    MsgDisp("Sassa","Nagasaki is famous for its many hills,
right?
I couldn't go running there.");
    MsgDisp("主人公","I see, 
Nagasaki does have many hills.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("Q120200000_02_100");
    MsgDisp("Sassa","So I think it would feel good if I could
run with you.
Don't you think so too?");
    MsgDisp("主人公","Eh∋　Me too?");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("Q120200000_02_110");
    MsgDisp("Sassa","Bike renting is also an option.
......would be a good idea, right?");
    MsgDisp("主人公","Hehe, yeah!");
    MsgDisp("主人公","( ｛颯砂＊＊｝...... I hope I can come back
sometime.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
