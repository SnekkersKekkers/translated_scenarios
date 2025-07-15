BGOpen("sc530",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Huh... over there is... ｛颯砂＊＊｝ and
｛氷室＊＊｝? )");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(2,254,3,0,4,#1,#1,0,1);
ChOpen(6,254,0,0,0,#1,#1,0,2);
MsgDisp("主人公","Good afternoon?
What are you two in the middle of talking
about?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("F100240000_02_000");
MsgDisp("Sassa","Inori, isn't she making a face like \"It's
so unusual for these two to be talking\"?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("F100240000_06_000");
MsgDisp("Himuro","It seems that way.");
MsgDisp("主人公","Eh?
That's not it at all, but...");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("F100240000_06_010");
MsgDisp("Himuro","But?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("F100240000_02_010");
MsgDisp("Sassa","Haha.
Inori, don't tease her.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("F100240000_02_020");
MsgDisp("Sassa","Despite the way it looks, we have quite a
lot in common.");
MsgDisp("主人公","Really?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("F100240000_06_020");
MsgDisp("Himuro","Why is that so 
surprising to you?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("F100240000_02_030");
MsgDisp("Sassa","Inori and I both like spending time on our
own..");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,3);
VoicePlay("F100240000_06_030");
MsgDisp("Himuro","Yeah.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,3);
VoicePlay("F100240000_06_040");
MsgDisp("Himuro","When Nozomu-senpai is concentrating on his
athletics, he's alone the whole time.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,2);
VoicePlay("F100240000_02_040");
MsgDisp("Sassa","And Inori is alone when he's on the
surfboard.");
MsgDisp("主人公","I see...
they're completely different sports, but
they have some similarities.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("F100240000_02_050");
MsgDisp("Sassa","Right. So I can learn a lot from his
mental aspects and way of thinking.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("F100240000_06_050");
MsgDisp("Himuro","Mine doesn't come close to
Nozomu-senpai's, though.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("F100240000_02_060");
MsgDisp("Sassa","No, it's interesting to hear how you can
ride the wave and at the same time and
display techniques that force others to
yield.");
MsgDisp("主人公","Finding commonalities and learning from
different sports, you're both amazing...");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("F100240000_02_070");
MsgDisp("Sassa","Yeah, maybe it's easier to listen to him
earnestly than if we did similar sports.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,3);
VoicePlay("F100240000_06_060");
MsgDisp("Himuro","Yes.
Please tell me about it again.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(6);
ChPosition(2,0);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("F100240000_02_080");
MsgDisp("Sassa","I'm stubborn when it comes to athletics,
so I can accept the opinions of someone
like Inori.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("F100240000_02_090");
MsgDisp("Sassa","He probably thinks that too.
We're both hard-headed I guess.
See you then.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(2);
MsgDisp("主人公","(These two seem to get along really
well...)");
BGMStop();
MsgClose();
ScrFadeOut(0);
