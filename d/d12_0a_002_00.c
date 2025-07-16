MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY",0.01);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("D120A00200_47_000");
MsgDisp("Broadcast","Next up: Men's 100m Dash.");
MsgClose();
SEPlay("EV_SE_625");
SEWait();
ChOpen(2,30,3,0,4,#1,#1,0,0);
VoicePlay("D120A00200_02_000");
MsgDisp("Sassa","Hey, are you coming?");
MsgDisp("主人公","Hehe, even if I don't,
｛颯砂＊＊｝ will still come in
first place, right?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("D120A00200_02_010");
MsgDisp("Sassa","That's not true, it'll be close.
I need to run at my full strength!");
SEPlay("EV_SE_628");
ChPosition(2,1);
MsgClose();
ChOpen(1,30,0,0,2,8,#1,0,2);
SEWait();
VoicePlay("D120A00200_01_000");
MsgDisp("Kazama","Sassa, you need to be more considerate of
your running mates.");
MsgDisp("主人公","Ah, ｛風真＊＊｝.
Are the two of you running together?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("D120A00200_02_020");
MsgDisp("Sassa","I'd like to run with him, but I'm not sure
if we're in the same race?");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("D120A00200_01_010");
MsgDisp("Kazama","You guys don't remember.
I ran a lot back in kindergarten.");
VoicePlay("D120A00200_47_010");
MsgDisp("Broadcast","Students participating in the men's 100m
dash please gather at the starting gate.");
MsgDisp("主人公","Good luck to the two of you!");
MsgClose();
ScrFadeOut(0);
MsgClose();
ChClose(1,0,0);
ChClose(2,0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ScrFadeIn(0);
MsgDisp("主人公","(It's about time for
｛風真＊＊｝ and
｛颯砂＊＊｝ to start. ......Huh?
Over there, is that——)");
MsgClose();
ScrFadeOut(0);
StlOpen("ev_0a_04");
StlEye(1,0);
StlEyeOpenLevel(1,0,1);
StlMouth(1,0);
StlEye(2,0);
StlMouth(2,0);
ScrFadeIn(0);
MsgDisp("主人公","(Eh!
I can't believe it......
They're in the same race∋)");
StlEye(2,0,0);
StlMouth(2,0);
StlEyeOpenLevel(2,0,1);
VoicePlay("D120A00200_02_030");
MsgDisp("Sassa","Ryota, this is fate.
Let's have fun like we did back in
kindergarten.");
StlEyeOpenLevel(1,#1);
VoicePlay("D120A00200_01_020");
MsgDisp("Kazama","...... Geez.
You really don't remember anything, huh?");
StlEye(2,0);
StlMouth(2,0);
VoicePlay("D120A00200_02_040");
MsgDisp("Sassa","I remember having fun.");
StlEyeOpenLevel(1,0,1);
VoicePlay("D120A00200_01_030");
MsgDisp("Kazama","Yeah, beating me in front of all of those
people must have been fun......");
VoicePlay("D120A00200_39_020");
MsgDisp("Referee","On your marks!
Get set——");
StlEyeOpenLevel(1,5,1);
StlEye(2,0,0);
StlMouth(2,0);
StlEyeOpenLevel(2,5,1);
VoicePlay("D120A00200_02_050");
MsgDisp("Sassa","Let's go, Ryota!");
SEPlay("EV_SE_612");
MsgClose();
ScrFadeOut(0);
SEWait();
StlClose();
SEPlay("EV_SE_792",0.2);
SEPlay("EV_SE_793",0.2);
Wait(50,0);
VoicePlay("D120A00200_42_030");
MsgDisp("Male Student","Sassa is amazing!
So fast!");
VoicePlay("D120A00200_44_000");
MsgDisp("School Girl","Ah, Kazama's going to lose!");
SEStop("EV_SE_792",2);
SEStop("EV_SE_793",2);
Wait(60);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
BGOpen("sc760",0);
MsgClose();
ChOpen(2,30,0,0,3,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","｛颯砂＊＊｝, congrats!");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("D120A00200_02_060");
MsgDisp("Sassa","Thank you!
It's been a while since I raced with
Ryota, so it was fun.");
VoicePlay("D120A00200_42_050");
MsgDisp("Male Student","As expected of the Track and Field Club's
Ace!");
VoicePlay("D120A00200_44_010");
MsgDisp("School Girl","Yeah, Sassa-kun was amazing!");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,4);
VoicePlay("D120A00200_02_070");
MsgDisp("Sassa","I'm glad to hear that.");
MsgDisp("主人公","(Hehe! It's like they're interviewing the
hero. ......Huh, where is
｛風真＊＊｝......? )");
MsgClose();
ScrFadeOut(0);
ChClose(2,0,0);
BGOpen("sc220",0);
ScrFadeIn(0);
MsgDisp("主人公","｛風真＊＊｝, are you okay?");
MsgClose();
ChOpen(1,30,3,3,2,#1,#1,5,0);
VoicePlay("D120A00200_01_040");
MsgDisp("Kazama","Y-You......");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
ChCheek(1,0);
VoicePlay("D120A00200_01_050");
MsgDisp("Kazama","What are you doing?");
MsgDisp("主人公","I saw ｛風真＊＊｝ going this
way so......
Are you sad?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChCheek(1,0);
VoicePlay("D120A00200_01_060");
MsgDisp("Kazama","Geez, how annoying.
Why aren't you with Sassa?");
MsgDisp("主人公","It was like interviewing a hero, everyone
was surrounding him.");
ChEye(1,4);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("D120A00200_01_070");
MsgDisp("Kazama","I see.
So you're doing the loser interview?");
MsgDisp("主人公","How's it feel taking the silver medal?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("D120A00200_01_080");
MsgDisp("Kazama","Haha, shut up.");
ChEye(1,4);
ChMouth(1,0);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("D120A00200_01_090");
MsgDisp("Kazama","But......
Thank you.
I get to share this feeling with you.");
MsgDisp("主人公","Eh?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("D120A00200_01_100");
MsgDisp("Kazama","It's nothing.
Look, the festival is continuing.
Shall we go?");
MsgDisp("主人公","(......｛風真＊＊｝?)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChClose(1,0,0);
ChPrmTblAdd(1,0);
ChPrmTblAdd(2,0);
