BGOpen("sc130",1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("D020500000_44_000");
MsgDisp("School Girl","Cya later～");
MsgDisp("主人公","Byebye.");
SEPlay("EV_SE_787");
SEWait();
MsgDisp("主人公","(Ah, ｛柊＊＊＊｝ sent me a message.)");
MsgDisp("主人公","(It says......\"I want you to come and 
see the Habataki Theater Company's new 
play\" Eh......Right now∋)");
MsgClose();
ScrFadeOut(0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("wf400",1);
BGMPlay("BGM_C05_HIIRAGI_A",0.01);
ChOpen(5,40,0,0,4,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("D020500000_05_000");
MsgDisp("Hiiragi","My apologies for calling you over here
so suddenly.");
MsgDisp("主人公","It's fine.
Congratulations on completing the 
Theater Company's newest production.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("D020500000_05_010");
MsgDisp("Hiiragi","Thank you so much.
I really wanted you to be the first
customer to see it.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("D020500000_05_020");
MsgDisp("Hiiragi","This way, please.");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
EnvAutoSet(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("wf426",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
BGMPlay("BGM_C05_HIIRAGI_C",0.01);
EnvPlay("SE_ENV_BG_EV004_CO0",1);
ScrFadeIn(0);
VoicePlay("D020500000_05_030");
MsgDisp("Hiiragi","It is just a dress rehearsal, so I hope
you will be able to follow the story.");
VoicePlay("D020500000_05_040");
MsgDisp("Hiiragi","Let's begin, then.");
MsgClose();
SEPlay("EV_SE_FOOT_039",0,0.5);
ChClose(5);
VoicePlay("D020500000_05_050");
MsgDisp("Hiiragi","I will also watch it from here.");
MsgDisp("主人公","(Eh......
｛柊＊＊＊｝ isn't participating?)");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
VoicePlay("D020500000_46_000");
MsgDisp("Theater Member B","This sword from your father will be 
like a radiant light that guides and 
protects you. Now, march onwards.");
VoicePlay("D020500000_33_020");
MsgDisp("Theater Member A","But Mother......");
VoicePlay("D020500000_46_010");
MsgDisp("Theater Member B","It's already too late for me to
take up that sword.
Go on.");
MsgDisp("主人公","(Ah!
Those actors......)");
VoicePlay("D020500000_05_060");
MsgDisp("Hiiragi","It's those two again.
They are back again in our new work.");
MsgDisp("主人公","I'm happy......");
MsgDisp("主人公","(But, like I thought......
｛柊＊＊＊｝ isn't in it.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("wf412",0);
EnvAutoSet(1);
MsgClose();
ChOpen(5,40,0,0,4,#1,#1,0,0);
ScrFadeIn(0);
ChMotion(5,4);
VoicePlay("D020500000_05_070");
MsgDisp("Hiiragi","How was it?
You were the first to see it.");
MsgDisp("主人公","It was really amazing. A sequel
\"Habataki Castle: On Fire\". 
That was lovely.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("D020500000_05_080");
MsgDisp("Hiiragi","Making a production we're proud of and
meeting the viewer's expectations,
hopefully we were able to achieve both.");
MsgDisp("主人公","Yeah......But what about ｛柊＊＊＊｝? I
can't believe ｛柊＊＊＊｝ isn't in
it......");
ChEye(5,0);
ChMouth(5,2);
ChMotion(5,0);
VoicePlay("D020500000_05_090");
MsgDisp("Hiiragi","Eh?");
MsgDisp("主人公","You know, it's not only me——
Nobody wants to see ｛柊＊＊＊｝ on
the sidelines......");
ChEye(5,3);
ChMouth(5,2);
ChMotion(5,5);
VoicePlay("D020500000_05_100");
MsgDisp("Hiiragi","......∈");
MsgClose();
SEPlay("EV_SE_FOOT_039",0,0.6);
ChClose(5,0,30);
ChLayout(0);
MsgClose();
Wait(5,1);
ChOpen(5,40,0,4,4,#1,#1,0,0,0,30);
SEWait();
VoicePlay("D020500000_05_110");
MsgDisp("Hiiragi","You......
That face, make that face again.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("D020500000_05_120");
MsgDisp("Hiiragi","It's okay.
I won't give up the lead role that
easily.");
MsgDisp("主人公","Eh......?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT",0.2,0.4);
ChClose(5,0,30);
ChLayout(1);
MsgClose();
Wait(10,1);
ChOpen(5,40,0,0,4,#1,#1,0,0,0,30);
SEWait();
VoicePlay("D020500000_05_130");
MsgDisp("Hiiragi","The new play has two casts.
We will take turns playing the roles.");
MsgDisp("主人公","I see!
What a relief......");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("D020500000_05_140");
MsgDisp("Hiiragi","I can't relax yet, though.
Depending on the reviews we get, we
may have to shut down the show.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("D020500000_05_150");
MsgDisp("Hiiragi","I will need to work on my acting.");
MsgDisp("主人公","(｛柊＊＊＊｝ looks like he's having fun.
I'm sure the stage will be even more 
beautiful than it was before!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
